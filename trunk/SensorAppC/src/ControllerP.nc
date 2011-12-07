
#include "ControllerConfig.h"

module ControllerP{
	//----------------------Connect to SensorC------------------------------
	provides {
		
		interface Init;
		interface Notify<status_packet_t>;
			
	}
	
	uses {
		
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
		interface Read<data_packet_t> as GetDataOne;
		
	}
	//----------------------------------------------------------------------
	
	//----------------------Connect to RadioSubsystem-----------------------
	//provides {}
	
	//uses {}
	//----------------------------------------------------------------------
	
	//----------------------Connect to SerialC------------------------------
	//provides {}
	
	uses {
		
		interface StdControl as UartControl;
		interface UartStream;
		interface UartByte;
		
		
		interface Notify<command_packet_t> as CommandNotification;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
		
	}
	//----------------------------------------------------------------------
	
	//----------------------Connect to HplAtm128GeneralIOC------------------
	uses {
		interface GeneralIO as CheckRoot;
	}
	//----------------------------------------------------------------------
	
}
implementation{
	
	bool IAmRoot;
		
	command error_t Init.init(){
		
		call CheckRoot.makeInput();
		IAmRoot = call CheckRoot.get();
		if(IAmRoot)		//if I am root, setup the serial part
		{
			;
		}
		
		return SUCCESS;
	}
//
//Every time this function called, it means the SensorC wants to send some data out, read all the data_packet_t
//one by one until see a data packet marked from source '0'. then send them out together
//
//this task can be done in several steps, which means, read 5 out, send, read another 5 out, send, like this way
//as an example
//
	command error_t Notify.enable(){
		data_packet_t SampleDataBuffer[CONTROLLER_BUFFER_SIZE];
		
		uint8_t i,iteration;
		
		i = 0;
		do
		{
			if(i < CONTROLLER_BUFFER_SIZE)
			{
				SampleDataBuffer[i] = call GetData.get();
				i++;
			}
			else
			{
				//send all the data in this buffer, need to be added later
				//--------------here---------------
				SampleDataBuffer[0] = call GetData.get();
				i = 1;
			}
		
		}while(SampleDataBuffer[i-1].source != 0);
		
		return SUCCESS;
	}

//can be used or sending some warnings from the SensorC, haven't implemented now, so empty now

	command error_t Notify.disable(){
		return SUCCESS;
	}

//return the sensor values with one sample request without touching SensorControlC

	event void GetDataOne.readDone(error_t result, data_packet_t val){
		if(SUCCESS == result)
		{
			if(IAmRoot)
			{
				call ForwardData.setNow(val);
			}
			else
			{
				//send this data through radio
			}
		}
	}

//this function will be executed if there is a command received from serial port
	event void CommandNotification.notify(command_packet_t val){
		status_packet_t status_temp,status_new;
		
		//TODO broadcast this val to radio first
		
		status_temp = call GetStatus.get();
		status_new  = status_temp;
		if((status_temp.node_id == val.address) || (BROADCAST_ID == val.address))
		{
			switch(val.opcode)
			{
				case COMMAND_CONFIGURE:
					if(1 == val.WE)
					{
						status_new.burstEnable		= val.BE;
						status_new.historyEnable	= val.HE;
						status_new.burstInterval	= val.value;
						status_new.node_id			= val.address;		//if defined CONSTANT_NODE_ID
																		//in SensorConfig.h, update node_id
																		//will give no effect
					}
					break;
				case COMMAND_ECHO:
					call ForwardCommand.setNow(val);
					return;
				case COMMAND_READ_DATA:
					call GetDataOne.read();
					return;
				case COMMAND_READ_HISTORY:
					call Notify.enable();
					return;
				case COMMAND_READ_STATUS:
					call ForwardStatus.setNow(call GetStatus.get());
					return;
				case COMMAND_INTERVAL_SECONDS:
					status_new.intervalType = 0;
					break; 
				case COMMAND_INTERVAL_MINUTES:
					status_new.intervalType = 1;
					break;
				case COMMAND_INTERVAL_HOURS:
					status_new.intervalType = 2;
					break;
				case COMMAND_INTERVAL_DAYS:
					status_new.intervalType = 3;
					break;
				default:
					return;
			}
			signal Notify.notify(status_new);
		}
	}


#ifdef DEBUG_MODE
/***********************************************************/
	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

	async event void UartStream.receivedByte(uint8_t byte){
		// TODO Auto-generated method stub
	}

/***********************************************************/
#endif

}