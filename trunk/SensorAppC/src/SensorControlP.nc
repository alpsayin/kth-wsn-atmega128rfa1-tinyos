//
//
//  SensorControlP.nc
//
//  aa
//
//  Created by Tian Junzhe on 12/5/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//

#include "SensorAppCommon.h"
#include "SensorConfig.h"

module SensorControlP{
	
	provides {
	
		interface Init;						//for initial
		
//		interface Set<status_packet_t>;
		interface Get<status_packet_t> as GetStatus;	//provide the status for the upper components to check the state
		interface ArrayPipe<data_packet_t> as GetData;		//transport the data from the history buffer to upper components
	
	}
	
	uses {
		
		interface Set<uint8_t> as SPEnable;		//SensorPowerEnable
		
		interface Read<data_packet_t> as ReadAdc;		//read a sample from SensorSubsystemC
		interface Timer<TMilli> as Timer0;			//internal timer for periodical reading
		interface Queue<data_packet_t> as StoreData;	//store sample in the history buffer

		interface Notify<status_packet_t>;				//set interface for upper components and generate a notify signal when the buffer is full

		interface Leds;

	}
}
implementation{

	static status_packet_t status;
	static data_packet_t tempData;

	command error_t Init.init(){			//initial function
		
		status.historyEnable	= 0;
        status.burstEnable		= 0;
        status.reserved			= 0;
        status.intervalType		= 0;
        status.burstInterval	= 1;
        status.node_id			= NODE_ID;
        
		return SUCCESS;
	}

	event void Timer0.fired(){				//every time the timer fired, the adc will sample all the sensors one time
		
#ifdef LED_SENSOR_ENABLE
		call Leds.led0Toggle();
#endif
		call SPEnable.set(0xff);			//open all 8 sensors' power supply(some of them are reserved)
		call ReadAdc.read();
		
	}
	
	uint32_t calcTimerPeriod()				//calculate the timer period from status values configured
	{
		if(status.burstInterval)
		{
			switch(status.intervalType)
			{
				case 0:
					return (status.burstInterval * 1 * TIMER_SCALE);
				case 1:
					return (status.burstInterval * 60 * TIMER_SCALE); 
				case 2:
					return (status.burstInterval * 3600 * TIMER_SCALE);
				case 3:
					return (status.burstInterval < DEFAULT_TIMER_BOUNDARY)?(status.burstInterval * 86400 * TIMER_SCALE):(DEFAULT_TIMER_BOUNDARY * 86400 * TIMER_SCALE);
				default:
					;
			}
		}
		return (DEFAULT_TIMER_PERIOD * TIMER_SCALE);
	}
	
	event void Notify.notify(status_packet_t val){	//configure the sensor status
		
		status = val;

		if(status.historyEnable || status.burstEnable)
		{
#if TIMING_PHASE_SHIFT==0
			call Timer0.startPeriodic(calcTimerPeriod());
#else
			call Timer0.startPeriodicAt(calcTimerPeriod(), TIMING_PHASE_SHIFT);
#endif

		}
		else
			call Timer0.stop();
	}

	command status_packet_t GetStatus.get(){		//read the sensor status out
		return status;
	}

	event void ReadAdc.readDone(error_t result, data_packet_t val){	//after the sampling of the adc, this function will executed one time
		
		if(SUCCESS == result)
		{
			if(status.historyEnable)
			{
				if(SENSOR_BUFFER_SIZE == call StoreData.size())
				{
#ifdef LED_SENSOR_ENABLE
					call Leds.led2On();
#endif
					call StoreData.dequeue();
				}
#ifdef LED_SENSOR_ENABLE
				else
					call Leds.led2Off();
#endif	
				call StoreData.enqueue(val);
				if((status.burstEnable==1) && (SENSOR_BUFFER_SIZE == call StoreData.size()))
				{
#ifdef LED_SENSOR_ENABLE
						call Leds.led1Toggle();
#endif
						call Notify.enable();
				}
			}
			else
			{
				if(status.burstEnable)
				{
					tempData = val;
#ifdef LED_SENSOR_ENABLE
					call Leds.led1Toggle();
#endif
					call Notify.enable();
				}
			}
		}
		
		call SPEnable.set(0x00);				//shut down all 8 sensors' power supply(some of them are reserved)
		
	}
	
	//get data from the history buffer
	//return value is the number of the packets in the array
	//if the array is full, return len
	command uint8_t GetData.getArray(data_packet_t* val, uint8_t len){
		
		uint8_t i_Sensor_Buffer_GetData = 0;
		if((!status.historyEnable) && (status.burstEnable))
		{
			val[0] = tempData;
			return 1;
		}
		else
		{
			while(TRUE)
			{
				if((len==i_Sensor_Buffer_GetData) || (call StoreData.empty()))
				{
						return i_Sensor_Buffer_GetData;
				}
				else
					val[i_Sensor_Buffer_GetData++] = call StoreData.dequeue();
			}
		}
		return i_Sensor_Buffer_GetData;
	}

/**************Not used here***********************************/
	command error_t GetData.sendArray(data_packet_t *val, uint8_t len){
		return SUCCESS;
	}
/**************************************************************/

}