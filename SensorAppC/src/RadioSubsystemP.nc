#include "Timer.h"
#include "RadioSubsystemConfig.h"

#include <stdio.h>
#include "packet_types.h"


module RadioSubsystemP
{
	provides
	{
		interface Init as RadioSubsystemInit;	
		
//		interface SetNow<data_packet_t[RADIO_HISTORY_SIZE]> as SetRadioHistory;
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
	bool commandReceptionEnabled=TRUE;
	bool receiveBusy=FALSE;
			
	command error_t RadioSubsystemInit.init() 
	{
		//if root is going to be set, it MUST be done before a call to this init
		//otherwise it must be called again
		return call AMControl.start();
	}
	
	event void AMControl.startDone(error_t err) 
	{
		if (err == SUCCESS) 
		{
			call DisseminationControl.start();
			call RoutingControl.start();
		}
		else 
		{
			call AMControl.start();
		}
	}
	
	event void AMControl.stopDone(error_t error)
	{
		// do nothing
	}

	event void NotifySerialCommand.notify(command_packet_t val)
	{
		call CommandUpdate.change(&val);
	}

	event void CommandValue.changed()
	{
		command_packet_t receivedCommandPacket;
		receiveBusy=TRUE;
		if(commandReceptionEnabled)
		{
			receivedCommandPacket = *call CommandValue.get();
			signal NotifyRadioCommand.notify(receivedCommandPacket);
		}
		receiveBusy=FALSE;
	}

	event message_t * DataCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		data_packet_t* dataPtr = (data_packet_t*)payload;
		while(call ForwardData.setNow(*dataPtr)!=SUCCESS);
		return msg;
	}

	event message_t * HistoryCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		uint8_t i;
		data_packet_t* historyPtr = (data_packet_t*)payload;
		for(i=0; i<RADIO_HISTORY_SIZE; i++)
		{
			while(call ForwardData.setNow(historyPtr[i])!=SUCCESS);
		}
		return msg;
	}

	event message_t * CommandCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		command_packet_t* commandPtr = (command_packet_t*)payload;
		while(call ForwardCommand.setNow(*commandPtr)!=SUCCESS);
		return msg;
	}

	event message_t * StatusCollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		status_packet_t* statusPtr = (status_packet_t*)payload;
		while(call ForwardStatus.setNow(*statusPtr)!=SUCCESS);
		return msg;
	}

	async command error_t SetRadioData.setNow(data_packet_t val)
	{
		error_t err;
		data_packet_t* msgDataPtr = (data_packet_t*)call DataCollectionSend.getPayload(&packet, sizeof(data_packet_t));
		
		atomic {
			if(locked)
			{
				return EBUSY;
			}
			locked = TRUE;
		}
		atomic {
			*msgDataPtr = val;
		}
		err = call DataCollectionSend.send(&packet, sizeof(data_packet_t));
		if(err!=SUCCESS)
		{
			locked = FALSE;
		}
		return err;
	}

	command error_t SetRadioHistory.sendArray(data_packet_t *val, uint8_t len)
	{
		error_t err;
		uint8_t i;
		data_packet_t* msgHistoryPtr;
		if(len > call DataCollectionSend.maxPayloadLength())
		{
			return ESIZE;
		}
		
		atomic {
			if(locked)
			{
				return EBUSY;
			}
			locked = TRUE;
		}
		msgHistoryPtr = (data_packet_t*)call DataCollectionSend.getPayload(&packet, sizeof(data_packet_t));
		atomic {
			memcpy(msgHistoryPtr, val, len);
		}
		err = call DataCollectionSend.send(&packet, sizeof(data_packet_t));
		if(err!=SUCCESS)
		{
			locked = FALSE;
		}
		return err;
	}
	
	command uint8_t SetRadioHistory.getArray(data_packet_t *val, uint8_t len){
		// TODO Auto-generated method stub
		return 0;
	}
	
	async command error_t SetRadioCommand.setNow(command_packet_t val)
	{
		error_t err;
		command_packet_t* msgCommandPtr = (command_packet_t*)call CommandCollectionSend.getPayload(&packet, sizeof(command_packet_t));
		
		atomic {
			if(locked)
			{
				return EBUSY;
			}
			locked = TRUE;
		}
		atomic {
			*msgCommandPtr = val;
		}
		err = call CommandCollectionSend.send(&packet, sizeof(command_packet_t));
		if(err!=SUCCESS)
		{
			locked = FALSE;
		}
		return err;
	}

	async command error_t SetRadioStatus.setNow(status_packet_t val)
	{
		error_t err;
		status_packet_t* msgStatusPtr = (status_packet_t*)call StatusCollectionSend.getPayload(&packet, sizeof(status_packet_t));
		
		atomic {
			if(locked)
			{
				return EBUSY;
			}
			locked = TRUE;
		}
		atomic {
			*msgStatusPtr = val;
		}
		err = call StatusCollectionSend.send(&packet, sizeof(status_packet_t));
		if(err!=SUCCESS)
		{
			locked = FALSE;
		}
		return err;
	}

	command error_t NotifyRadioCommand.enable()
	{
		receiveBusy=FALSE;
		commandReceptionEnabled=TRUE;
		return SUCCESS;
	}

	command error_t NotifyRadioCommand.disable()
	{
		if(receiveBusy)
		{
			return EBUSY;
		}
		else
		{
			commandReceptionEnabled=FALSE;
		}
		return SUCCESS;
	}

	
	event void DataCollectionSend.sendDone(message_t *msg, error_t error)
	{
		locked = FALSE;
	}
	event void CommandCollectionSend.sendDone(message_t *msg, error_t error)
	{
		locked = FALSE;
	}
	event void StatusCollectionSend.sendDone(message_t *msg, error_t error)
	{
		locked = FALSE;
	}
	event void HistoryCollectionSend.sendDone(message_t *msg, error_t error)
	{
		locked = FALSE;
	}

}