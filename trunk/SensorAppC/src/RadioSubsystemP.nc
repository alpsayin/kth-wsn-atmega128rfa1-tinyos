
#include "Timer.h"
#include <stdio.h>
#include "packet_types.h"
#include "SensorAppCommon.h"

module RadioSubsystemP
{
	provides
	{
		interface Init as RadioSubsystemInit;	
		
		//the length provided to the functions of ArrayPipe should be array lengths, not byte lengths
		interface ArrayPipe<data_packet_t> as SetRadioHistory;
		interface SetNow<data_packet_t> as SetRadioData;
		interface SetNow<command_packet_t> as SetRadioCommand;
		interface SetNow<status_packet_t> as SetRadioStatus;
		interface Notify<command_packet_t> as NotifyRadioCommand;
	}
	uses 
	{
		interface Leds;
		
		interface SplitControl as AMControl;
 
		interface StdControl as DisseminationControl;
		interface DisseminationValue<command_packet_t> as CommandValue;
		interface DisseminationUpdate<command_packet_t> as CommandUpdate;
		
		interface StdControl as RoutingControl;
		
		interface Send as DataCollectionSend;
		interface Receive as DataCollectionReceive;
		
		interface Send as HistoryCollectionSend;
		interface Receive as HistoryCollectionReceive;
		
		interface Send as CommandCollectionSend;
		interface Receive as CommandCollectionReceive;
		
		interface Send as StatusCollectionSend;
		interface Receive as StatusCollectionReceive;
		
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface Notify<command_packet_t> as NotifySerialCommand;
	}


}
implementation
{
	message_t packet;
	bool locked=FALSE;
	bool commandDisseminationEnabled=TRUE;
	bool receiveBusy=FALSE;
	
	//RadioSubsystemInit::Init functions
	command error_t RadioSubsystemInit.init() 
	{
		//if root is going to be set, it MUST be done before a call to this init
		//otherwise it must be called again
		return call AMControl.start();
	}
	
	//AMControl::SplitControl Functions
	event void AMControl.startDone(error_t err) 
	{
		if (err == SUCCESS) //if radio started successfully
		{
			call DisseminationControl.start(); //start dissemination and routing controls
			call RoutingControl.start();
		}
		else //if radio has not started successfully
		{
			call AMControl.start(); //try again
		}
	}
	
	event void AMControl.stopDone(error_t error)
	{
		// do nothing
	}

	//NotifySerialCommand::Notify<command_packet_t> functions
	
	//notify: should be used to forward commands from UART to Radio
	event void NotifySerialCommand.notify(command_packet_t val)
	{
		if(commandDisseminationEnabled) //disseminate only if enabled
			call CommandUpdate.change(&val);
	}

	//enable: enable the dissemination of commands through radio, also enables the reception
	command error_t NotifyRadioCommand.enable()
	{
		if(receiveBusy) //if busy don't do anything, logically this means notify is enabled
		{
			return EBUSY;
		}
		else //if we are not busy reset the flags
		{
			receiveBusy=FALSE;
			commandDisseminationEnabled=TRUE;
		}
		return SUCCESS;
	}
	
	//disable: disables the dissemination of commands through radio, also disables the reception
	command error_t NotifyRadioCommand.disable()
	{
		if(receiveBusy) //if we are busy don't do anything
		{
			return EBUSY;
		}
		else //else reset the flags
		{
			receiveBusy=FALSE;
			commandDisseminationEnabled=FALSE;
		}
		return SUCCESS;
	}
	
	//CommandValue::DisseminationValue<command_packet_t> functions
	//changed: called when we receive a new command packet from radio
	event void CommandValue.changed()
	{
		command_packet_t receivedCommandPacket;
		receiveBusy=TRUE; //set receive busy
		if(commandDisseminationEnabled) //if reception of commands is enabled
		{
			receivedCommandPacket = *call CommandValue.get(); //get the command pointer	
			signal NotifyRadioCommand.notify(receivedCommandPacket); //notify the controller
		}
		receiveBusy=FALSE;
	}
	
	//DataCollectionReceive::CollectionReceive functions
	//receive: called when a data packet is received from radio, it is only called in root(s)
	event message_t * DataCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		data_packet_t* dataPtr = (data_packet_t*)payload; //open the payload
		while(call ForwardData.setNow(*dataPtr)!=SUCCESS); //try to forward data until successful
		return msg;
	}

	//HistoryCollectionReceive::CollectionReceive functions
	//receive: called when a history packet is received from radio, it is only called in root(s)
	event message_t * HistoryCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		uint8_t i;
		data_packet_t* historyPtr = (data_packet_t*)payload; //open the payload
		for(i=0; i<RADIO_HISTORY_SIZE; i++) //forward the data with RADIO_HISTORY_SIZE
		{
			//TODO check RADIO_HISTORY_SIZE
			while(call ForwardData.setNow(historyPtr[i])!=SUCCESS);
		}
		return msg;
	}

	//CommandCollectionReceive::CollectionReceive functions
	//receive: called when a command packet is received from radio, it is only called in root(s)
	event message_t * CommandCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		command_packet_t* commandPtr = (command_packet_t*)payload; //open the payload
		while(call ForwardCommand.setNow(*commandPtr)!=SUCCESS); //try to forward it until successful
		return msg;
	}

	//StatusCollectionReceive::CollectionReceive functions
	//receive: called when a status packet is received from radio, it is only called in root(s)
	event message_t * StatusCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		status_packet_t* statusPtr = (status_packet_t*)payload; //open the payload
		while(call ForwardStatus.setNow(*statusPtr)!=SUCCESS); //try to forward it until successful
		return msg;
	}

	//SetRadioData:SetNow<data_packet_t> functions
	//setNow: should be used to send data packet through radio to root
	async command error_t SetRadioData.setNow(data_packet_t val)
	{
		error_t err;
		data_packet_t* msgDataPtr;
		
		//check if we're already sending something
		atomic {
			if(locked) //if we're locked
			{
				return EBUSY; //return ebusy
			}
			locked = TRUE;
		}
		
		//get a payload with a size of data packet
		msgDataPtr = (data_packet_t*)call DataCollectionSend.getPayload(&packet, sizeof(data_packet_t));
		
		//copy the payload from the parameter
		atomic {
			*msgDataPtr = val;
		}
		
		//try to send it
		err = call DataCollectionSend.send(&packet, sizeof(data_packet_t));
		//set locked=false if we are unsuccessful
		if(err!=SUCCESS)
		{
			atomic {
				locked = FALSE;
			}
		}
		return err;
	}

	//SetRadioHistory:ArrayPipe<data_packet_t> functions
	//sendArray: should be used to send history through radio to root
	command error_t SetRadioHistory.sendArray(data_packet_t *val, uint8_t len)
	{
		error_t err;
		uint8_t i;
		data_packet_t* msgHistoryPtr;
		
		if(len*sizeof(data_packet_t) > call HistoryCollectionSend.maxPayloadLength())
			return ESIZE;
		//check if radio is not busy
		atomic {
			if(locked)
			{
				return EBUSY;
			}
			locked = TRUE;
		}
		//get payload with size of array in bytes
		call Leds.set( sizeof(history_packet_t) );
		msgHistoryPtr = (data_packet_t*)call HistoryCollectionSend.getPayload(&packet, len*sizeof(data_packet_t));
		atomic {
			for(i=0; i<len; i++)
			{
				//memcpy(msgHistoryPtr, val, len*sizeof(data_packet_t)); //copy the array
				msgHistoryPtr[i] = val[i];
			}
		}
		//try to send it
		err = call HistoryCollectionSend.send(&packet, len*sizeof(data_packet_t));
		//set locked=false if it's not successful
		if(err!=SUCCESS)
		{
			atomic {
				locked = FALSE;
			}
		}
		return err;
	}
	
	//getArray: not used in this direction
	command uint8_t SetRadioHistory.getArray(data_packet_t *val, uint8_t len)
	{
		// always returns 0
		return 0;
	}
	
	//SetRadioCommand:SetNow<command_packet_t> functions
	//setNow: should be used to send command packet through radio to root
	async command error_t SetRadioCommand.setNow(command_packet_t val)
	{
		error_t err;
		command_packet_t* msgCommandPtr;
		
		//check if we're busy
		atomic {
			if(locked) //if we are busy
			{
				return EBUSY; //return busy error code
			}
			locked = TRUE;
		}
		//get payload
		msgCommandPtr = (command_packet_t*)call CommandCollectionSend.getPayload(&packet, sizeof(command_packet_t));
		
		//copy the command to payload
		atomic {
			*msgCommandPtr = val;
		}
		//try to send it
		err = call CommandCollectionSend.send(&packet, sizeof(command_packet_t));
		//set locked=false if it's unsuccessful
		if(err!=SUCCESS)
		{
			atomic {
				locked = FALSE;
			}
		}
		return err;
	}

	//SetRadioStatus:SetNow<status_packet_t> functions
	//setNow: should be used to send status packet through radio to root
	async command error_t SetRadioStatus.setNow(status_packet_t val)
	{
		error_t err;
		status_packet_t* msgStatusPtr;		
		//check if we're busy
		atomic {
			if(locked) //if we're busy
			{
				return EBUSY; //return busy error code
			}
			locked = TRUE;
		}
		
		//get payload
		msgStatusPtr = (status_packet_t*)call StatusCollectionSend.getPayload(&packet, sizeof(status_packet_t));
		
		//copy status to payload
		atomic {
			*msgStatusPtr = val;
		}
		
		//try to send it
		err = call StatusCollectionSend.send(&packet, sizeof(status_packet_t));
		
		//set locked=false if it's unsuccessful
		if(err!=SUCCESS)
		{
			atomic {
				locked = FALSE;
			}
		}
		return err;
	}

	//DataCollectionSend:CollectionSend functions
	//sendDone: called when collection sending is complete
	event void DataCollectionSend.sendDone(message_t *msg, error_t error)
	{
		//release the lock
		atomic {
			locked = FALSE;
		}
	}
	
	//CommandCollectionSend:CollectionSend functions
	//sendDone: called when collection sending is complete
	event void CommandCollectionSend.sendDone(message_t *msg, error_t error)
	{
		//release the lock
		atomic {
			locked = FALSE;
		}
	}
	
	//StatusCollectionSend:CollectionSend functions
	//sendDone: called when collection sending is complete
	event void StatusCollectionSend.sendDone(message_t *msg, error_t error)
	{
		//release the lock
		atomic {
			locked = FALSE;
		}
	}
	
	//HistoryCollectionSend:CollectionSend functions
	//sendDone: called when collection sending is complete
	event void HistoryCollectionSend.sendDone(message_t *msg, error_t error)
	{
		//release the lock
		atomic {
			locked = FALSE;
		}
	}

}