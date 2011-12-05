
#include "SensorConfig.h"

module SensorControlP{
	
	provides {
	
		interface Init;						//for initial

//		interface Set<status_packet_t>;
		interface Get<status_packet_t> as GetStatus;	//provide the status for the upper components to check the state
		interface Get<data_packet_t> as GetData;		//transport the data from the history buffer to upper components
	
	}
	
	uses {
		
		interface Read<data_packet_t> as ReadAdc;		//read a sample from SensorSubsystemC
		interface Timer<TIMER_UNIT> as Timer0;			//internal timer for periodical reading
		interface Queue<data_packet_t> as StoreData;	//store sample in the history buffer

		interface Notify<status_packet_t>;				//set interface for upper components and generate a notify signal when the buffer is full

	}
}
implementation{

	status_packet_t status;
	data_packet_t DataTemp;

	command error_t Init.init(){			//initial function
		
		status.historyEnable	= 0;
        status.burstEnable		= 0;
        status.reserved			= 0;
        status.intervalType		= 0;
        status.burstInterval	= 0;
        status.node_id			= NODE_ID;
        
		return SUCCESS;
	}

	event void Timer0.fired(){				//every time the timer fired, the adc will sample all the sensors one time
		
		call ReadAdc.read();
		
	}
	
	uint32_t calcTimerPeriod()				//calculate the timer period from status values configured
	{
		if(status.burstInterval)
			switch(status.intervalType)
			{
				case 0:
					return status.burstInterval;
				case 1:
					return (status.burstInterval * 60); 
				case 2:
					return (status.burstInterval * 3600);
				case 3:
					return (status.burstInterval < DEFAULT_TIMER_BOUNDRY)?(status.burstInterval * 86400):(40 * 86400);
			}
		return DEFAULT_TIMER_PERIOD;
	}
	
	event void Notify.notify(status_packet_t val){	//configure the sensor status
		
		status = val;
		if(status.historyEnable)
		{
			call Timer0.startPeriodic(calcTimerPeriod());	
		}
		else
			call Timer0.stop();
		if(val.node_id)
		{
			status.node_id = NODE_ID;
		}		
	}

	command status_packet_t GetStatus.get(){		//read the sensor status out
		return status;
	}

	event void ReadAdc.readDone(error_t result, data_packet_t val){	//after the sampling of the adc, this function will executed one time
		
		if(SUCCESS == result)
		{
			if(BUFFER_SIZE != call StoreData.size())
				result = call StoreData.enqueue(val);
			else
				call Notify.disable();
		}
		if(BUFFER_SIZE == (call StoreData.size()))
		{
			if(1 == status.burstEnable)
				call Notify.enable();
			else
			{
				call StoreData.dequeue();
				call StoreData.enqueue(val);
			}
		}
	}

	command data_packet_t GetData.get(){		//read a sample out from data buffer(Queue) if it is not empty
		
		if(0 != call StoreData.size())
			DataTemp = call StoreData.dequeue();
		else
			DataTemp.source = 0;
		
		return DataTemp;
			
	}
}