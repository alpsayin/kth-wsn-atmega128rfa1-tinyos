
#include "packet_types.h"
#include <stdio.h>
#include "TimerConfig.h"

module SerialPacketForwarderP @safe() 
{
	uses
	{
		interface Leds;
		interface UartStream;
		interface UartByte;
		interface StdControl as UartControl;
		interface PacketTypes;
		
		interface Queue<data_packet_t> as DataQueue;
		interface Queue<status_packet_t> as StatusQueue;
		interface Queue<command_packet_t> as CommandQueue;
	}
	provides
	{
		interface Init as SerialPacketForwarderInit;
		interface StdControl as SerialPacketForwarderControl;
		//should be wired to the radiosubsystem interfaces
		interface Notify<command_packet_t> as CommandNotification;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
	}
}
implementation
{
	
	#define COMMAND_RECEIVE_BUFFER_SIZE 64
	task void processReceiveBufferTask();
	task void forwardNextPacketTask();

    norace bool started;
    bool enabled;
    bool commandReceptionEnabled;
    
    char receiveBuffer[COMMAND_RECEIVE_BUFFER_SIZE];	
    char temporaryBuffer[COMMAND_RECEIVE_BUFFER_SIZE];	
    uint8_t temporaryPos;
	uint8_t pos;

	//SerialPacketForwarderInit::Init functions
	//init: initializes the uart system and enables the command notifications
	command error_t SerialPacketForwarderInit.init()
	{
		call CommandNotification.enable();
		return SUCCESS;
	}

	//SerialPacketForwarderControl::StdControl functions
	//start: enables the bi-directional forwarding system, should be called before enabling the notifications
	command error_t SerialPacketForwarderControl.start()
	{
		enabled=TRUE;
		return call UartControl.start();
	}
	
	//stop: disables the bi-directional forwarding system
	command error_t SerialPacketForwarderControl.stop()
	{
		if(started)
			return EBUSY;
		enabled=FALSE;
		return call UartControl.stop();
	}

	//CommandNotification::Notify<command_packet_t> functions
	//enable: enables the command reception, also reset the buffer, doesnt touch the forwarding
	command error_t CommandNotification.enable()
	{
		//check if enabled, if not enabled return OFF error code
		if(!enabled)
			return EOFF;
		//set reception true
		atomic {
			commandReceptionEnabled = TRUE;
		}
		started=FALSE;
		return call UartControl.start();
	}
	
	//disable: disables the command reception, doesnt touch the forwarding
	command error_t CommandNotification.disable()
	{
		//check if enabled, if not enabled return OFF error code
		if(!enabled)
			return EOFF;
		if(started)
			return EBUSY;
		//set reception false, forwarding to the uart is still active
		atomic {
			commandReceptionEnabled = FALSE;
		}
		started=FALSE;
		return call UartControl.stop();
	}
	
	//UartStream::UartStream functions
	//sendDone: not used
	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// UartStream.sendDone not used
	}
	//receiveDone: not used
	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// UartStream.receiveDone not used
	}
	
	//receivedByte: ISR Context! puts the characters into a buffer and posts a process task if necessary
	async event void UartStream.receivedByte(uint8_t byte)
	{
		uint8_t incoming;
		incoming = byte;
		//check if command reception is enabled
		if(!enabled)
			return;
		if(!commandReceptionEnabled)
			return;
		//echo back
		//TODO disable echoing, since ALIX would think that it's a received packet
        call UartByte.send(incoming);
        //check the incoming charpos
        if(incoming == '[') //if it's a starting delimiter
        {
            atomic {
            	pos=0; //reset buffer position
        		receiveBuffer[pos++]=incoming; //write the char into buffer and increment pos
            }
            started=TRUE; //set started true
        }
        else if(started) //if we are started (meaning that if we are between brackets)
        {
        	atomic {
        		if(pos<COMMAND_RECEIVE_BUFFER_SIZE) //if pos is within limits
        		{
            		receiveBuffer[pos++]=incoming; //save the char and increment pos
        		}
	            else //if not reset the buffer (shouldn't happen if it's a correct packet)
	            	pos=0; //if we are not within limits, do not overflow reset the pos
        	}
        }
        else if(incoming == ']' && started) //if it's a ending delimiter
        {
        	atomic{
        		if(pos+1<COMMAND_RECEIVE_BUFFER_SIZE) //if pos is within limits
        		{
		            receiveBuffer[pos++]=incoming; //save the char and increment the pos
		            receiveBuffer[pos]=0; //null terminate the received string (for convenience)
	            }
	            else //if not reset the buffer (shouldn't happen if it's a correct packet)
	            	pos=0;
            }
            started=FALSE; //set started false, we just received a packet
            //copy the received packet into a temporary buffer, so that next incoming character doesn't overwrite the receive buffer
            //this operation is a little expensive, but necessary to protect data
		    atomic {
		    	memcpy((char*)temporaryBuffer, (char*)receiveBuffer, pos<=COMMAND_RECEIVE_BUFFER_SIZE?pos:COMMAND_RECEIVE_BUFFER_SIZE);
		    	temporaryBuffer[pos]=0;
		    	temporaryPos = pos;
    		}
			post processReceiveBufferTask(); //post a task to process it
        }
	}

	//ForwardCommand::SetNow<command_packet_t> functions
	//setNow: put the command packet into a buffer and post a task to process it
	async command error_t ForwardCommand.setNow(command_packet_t val)
	{
		error_t err;
		//check if enabled, if not enabled return OFF error code
		if(!enabled)
			return EOFF;
		err = call CommandQueue.enqueue(val); //enqueue the packet
		if(err == SUCCESS) //if it's successful
			post forwardNextPacketTask(); //post the task to forward it
		return err;
	}

	//ForwardData::SetNow<data_packet_t> functions
	//setNow: put the data packet into a buffer and post a task to process it
	async command error_t ForwardData.setNow(data_packet_t val)
	{
		error_t err;
		//check if enabled, if not enabled return OFF error code
		if(!enabled)
			return EOFF;
		err = call DataQueue.enqueue(val); //enqueue the packet
		if(err == SUCCESS) //if it's successful
			post forwardNextPacketTask(); //post the task to forward it
		return err;
	}

	//ForwardCommand::SetNow<status_packet_t> functions
	//setNow: put the command packet into a buffer and post a task to process it
	async command error_t ForwardStatus.setNow(status_packet_t val)
	{
		error_t err;
		//check if enabled, if not enabled return OFF error code
		if(!enabled)
			return EOFF;
		err = call StatusQueue.enqueue(val); //enqueue the packet
		if(err == SUCCESS) //if it's successful
			post forwardNextPacketTask(); //post the task to forward it
		return err;
	}
	
	//TASK: forwardNextPacketTask()
	//this task checks the queue's for packets to be forwarded and forwards them through UART
	task void forwardNextPacketTask()
	{
    	uint8_t localBuf[64];
		uint8_t len;
	    status_packet_t localStatusPacket;
	    data_packet_t localDataPacket;
	    command_packet_t localCommandPacket;
	    
	    //if we are not enabled we shouldn't even come here, just checking for convenience
	    if(!enabled)
	    	return;
	    if(!commandReceptionEnabled)
	    	return;
	    	
		if(!call DataQueue.empty()) // if data queue is not empty
		{
			localDataPacket = call DataQueue.head(); //peek at the head
			len = call PacketTypes.dataPacketToStr(&localDataPacket, localBuf); //convert it to a string
			if(call UartStream.send(localBuf, len)==SUCCESS) //try to send it
				call DataQueue.dequeue(); //if sending is successful -> remove it from the queue
			else
				post forwardNextPacketTask(); //if not successful -> do not remove and try again	
		}
		if(!call StatusQueue.empty()) //if status queue is not empty 
		{
			localStatusPacket = call StatusQueue.head(); //peek at the head
			len = call PacketTypes.statusPacketToStr(&localStatusPacket, localBuf); //convert it to a string
			if(call UartStream.send(localBuf, len)==SUCCESS) //try to send it
				call StatusQueue.dequeue(); //if sending is successful -> remove it from the queue
			else
				post forwardNextPacketTask(); //if not successful -> do not remove and try again	
		}
		if(!call CommandQueue.empty()) //if command queue is not empty
		{
			localCommandPacket = call CommandQueue.head(); //peek at the head
			len = call PacketTypes.commandPacketToStr(&localCommandPacket, localBuf); //convert it to a string
			if(call UartStream.send(localBuf, len)==SUCCESS) //try to send it
				call CommandQueue.dequeue(); //try to send it
			else
				post forwardNextPacketTask(); //if not successful -> do not remove and try again	
		}
		if(!call DataQueue.empty() || !call StatusQueue.empty() || !call CommandQueue.empty()) //after all these operations if one of the queue is still not empty
			post forwardNextPacketTask(); //post itself again to empty the queue
	}
	
	//TASK: processReceiveBufferTask()
	//this task checks the incoming packet between square brackets to see if it's a meaningful packet
	task void processReceiveBufferTask()
	{
    	uint8_t localBuf[COMMAND_RECEIVE_BUFFER_SIZE];
		uint8_t localPos;
		uint8_t type;
//	    data_packet_t localDataPacket;
//	    status_packet_t localStatusPacket;
	    command_packet_t localCommandPacket;
	    
	    //if we are not enabled we shouldn't even come here, just checking for convenience
	    if(!enabled)
	    	return;
	    if(!commandReceptionEnabled)
	    	return;
	    	
	    //copy the temporaryBuffer to a localbuffer (double buffering)
	    atomic {
	    	memcpy((char*)localBuf, (char*)temporaryBuffer, temporaryPos<=COMMAND_RECEIVE_BUFFER_SIZE?temporaryPos:COMMAND_RECEIVE_BUFFER_SIZE);
	    	localBuf[temporaryPos]=0;
	    	localPos = temporaryPos;
    	}
    	//try to get the type of packet
	    type=call PacketTypes.getTypeOfPacket(localBuf);
	    if(type!=PACKET_ERROR) //if it's a known type of packet
	    {
	    	//toggle led, only for debugging
//	    	call Leds.led0Toggle();
	    }
	    if(type == PACKET_COMMAND) //if it's a command type (that's the only type we can get, but we check for convenience)
	    {
	    	//try to convert the string into an actual packet
	        type=call PacketTypes.strToCommandPacket(&localCommandPacket, localBuf);
	        if(type != PACKET_COMMAND) //check the type again for convenience
	            return; //if type doesn't match, return
			signal CommandNotification.notify(localCommandPacket); //signal the arriving command packet from UART to controller
	    }
//	    else if(type == PACKET_DATA)
//	    {
//	        type=call PacketTypes.strToDataPacket(&localDataPacket, localBuf);
//	        if(type != PACKET_DATA)
//	            return;
//	    }
//	    else if(type == PACKET_STATUS)
//	    {
//	        type=call PacketTypes.strToStatusPacket(&localStatusPacket, localBuf);
//	        if(type != PACKET_STATUS)
//	            return;
//	    }
	}
}