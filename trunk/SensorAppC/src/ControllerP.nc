
#include "ControllerConfig.h"

module ControllerP{
	
	provides interface Init;
	
	//----------------------Connect to SensorC------------------------------
	provides {
		
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
#ifdef DEBUG_MODE
		interface StdControl as UartControl;
		interface UartStream;
		interface UartByte;
#endif
		
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

	error_t ForwardDataToSerial(data_packet_t * SampleDataBuffer,uint8_t i_Limitation)
	{
		uint8_t i_ForwardDataToSerial;
		
		for(i_ForwardDataToSerial = 0;i_ForwardDataToSerial<i_Limitation;i_ForwardDataToSerial++)
		{
			call ForwardData.setNow(SampleDataBuffer[i_ForwardDataToSerial]);
		}
		return SUCCESS
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
		
		uint8_t i_Notify_enable;
		
		i_Notify_enable = 0;
		do
		{
			if(i_Notify_enable < CONTROLLER_BUFFER_SIZE)
			{
				SampleDataBuffer[i_Notify_enable] = call GetData.get();
				i_Notify_enable++;
			}
			else
			{
				//send all the data in this buffer, need to be added later
				if(IAmRoot)
					ForwardDataToSerial(SampleDataBuffer,CONTROLLER_BUFFER_SIZE);
				//else
					//;//TODO send from radio
				//--------------here---------------
				SampleDataBuffer[0] = call GetData.get();
				i_Notify_enable = 1;
			}
		
		}while(SampleDataBuffer[i_Notify_enable-1].source != 0);
		if(IAmRoot)
			ForwardDataToSerial(SampleDataBuffer, ((i_Notify_enable>0)?(i_Notify_enable-1):(0)));
		//else
			//;//TODO send from radio
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
				//TODO send this data through radio
			}
		}
	}

//this function will be executed if there is a command received from serial port
	event void CommandNotification.notify(command_packet_t val){
		status_packet_t status_temp,status_new;
//		bool correct=FALSE;
		//TODO broadcast this val to radio first
		
		status_temp = call GetStatus.get();
		status_new  = status_temp;
		if((status_temp.node_id == val.address) || (BROADCAST_ID == val.address))
		{
			switch(val.opcode)
			{
				case COMMAND_CONFIGURE:
					//correct = TRUE;
					break;
				case COMMAND_READ_DATA:
					call GetDataOne.read();
					break;
				case COMMAND_READ_HISTORY:
					call Notify.enable();
					break;
				case COMMAND_READ_STATUS:
					call ForwardStatus.setNow(call GetStatus.get());
					break;
				case COMMAND_INTERVAL_SECONDS:
					status_new.intervalType = INTERVAL_TYPE_SECONDS;
					break; 
				case COMMAND_INTERVAL_MINUTES:
					status_new.intervalType = INTERVAL_TYPE_MINUTES;
					break;
				case COMMAND_INTERVAL_HOURS:
					status_new.intervalType = INTERVAL_TYPE_HOURS;
					break;
				case COMMAND_INTERVAL_DAYS:
					status_new.intervalType = INTERVAL_TYPE_DAYS;
					break;
				case COMMAND_ECHO:
					call ForwardCommand.setNow(val);
				default:
					return;
			}
			if(1 == val.WE)
			{
				status_new.burstEnable		= val.BE;
				status_new.historyEnable	= val.HE;
				status_new.burstInterval	= val.value;
				status_new.node_id			= (0xffff!=val.address)?val.address:status_temp.node_id;
																//if defined CONSTANT_NODE_ID
																//in SensorConfig.h, update node_id
																//will give no effect
					
				signal Notify.notify(status_new);
			}
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