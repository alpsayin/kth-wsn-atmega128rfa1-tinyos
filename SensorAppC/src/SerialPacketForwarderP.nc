
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
    
    char receiveBuffer[COMMAND_RECEIVE_BUFFER_SIZE];	
	uint8_t pos;


	command error_t SerialPacketForwarderInit.init()
	{
		call UartControl.start();
		call CommandNotification.enable();
		return SUCCESS;
	}
	
	command error_t CommandNotification.disable()
	{
		if(started)
			return EBUSY;
		return call UartControl.stop();
	}

	command error_t CommandNotification.enable()
	{
		enabled=TRUE;
		started=FALSE;
		return call UartControl.start();
	}
	
	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// UartStream.receiveDone not used
	}
	async event void UartStream.receivedByte(uint8_t byte)
	{
        call UartByte.send(byte);
        if(byte == '[')
        {
            atomic {
            	pos=0;
        		receiveBuffer[pos++]=byte;
            }
            started=1;
        }
        else if(byte == ']' && started)
        {
        	atomic{
        		if(pos<COMMAND_RECEIVE_BUFFER_SIZE)
        		{
		            receiveBuffer[pos++]=byte;
		            receiveBuffer[pos]=0;
	            }
	            else
	            	pos=0;
            }
            started=0;
			post processReceiveBufferTask();
        }
        else if(started)
        {
        	atomic {
        		if(pos<COMMAND_RECEIVE_BUFFER_SIZE)
        		{
            		receiveBuffer[pos++]=byte;
        		}
	            else
	            	pos=0;
        	}
        }
	}

	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// UartStream.sendDone not used
	}
	task void processReceiveBufferTask()
	{
    	uint8_t localBuf[COMMAND_RECEIVE_BUFFER_SIZE];
		uint8_t type;
//	    data_packet_t localDataPacket;
//	    status_packet_t localStatusPacket;
	    command_packet_t localCommandPacket;
	    
	    atomic {
	    	memcpy((char*)localBuf, (char*)receiveBuffer, pos<=COMMAND_RECEIVE_BUFFER_SIZE?pos:COMMAND_RECEIVE_BUFFER_SIZE);
	    	localBuf[pos]=0;
    	}
	    type=call PacketTypes.getTypeOfPacket(localBuf);
	    if(type!=PACKET_ERROR)
	    {
//	    	call Leds.led0Toggle();
	    }
	    if(type == PACKET_COMMAND)
	    {
	        type=call PacketTypes.strToCommandPacket(&localCommandPacket, localBuf);
	        if(type == PACKET_ERROR)
	            return;
			signal CommandNotification.notify(localCommandPacket);
	    }
//	    else if(type == PACKET_DATA)
//	    {
//	        type=call PacketTypes.strToDataPacket(&localDataPacket, localBuf);
//	        if(type == PACKET_ERROR)
//	            return;
//	    }
//	    else if(type == PACKET_STATUS)
//	    {
//	        type=call PacketTypes.strToStatusPacket(&localStatusPacket, localBuf);
//	        if(type == PACKET_ERROR)
//	            return;
//	    }
	}

	async command error_t ForwardCommand.setNow(command_packet_t val)
	{
		error_t err = call CommandQueue.enqueue(val);
		if(err == SUCCESS)
			post forwardNextPacketTask();
		return err;
	}

	async command error_t ForwardData.setNow(data_packet_t val)
	{
		error_t err = call DataQueue.enqueue(val);
		if(err == SUCCESS)
			post forwardNextPacketTask();
		return err;
	}

	async command error_t ForwardStatus.setNow(status_packet_t val)
	{
		error_t err = call StatusQueue.enqueue(val);
		if(err == SUCCESS)
			post forwardNextPacketTask();
		return err;
	}
	
	task void forwardNextPacketTask()
	{
    	uint8_t localBuf[64];
		uint8_t len;
	    status_packet_t localStatusPacket;
	    data_packet_t localDataPacket;
	    command_packet_t localCommandPacket;
		if(!call DataQueue.empty())
		{
			localDataPacket = call DataQueue.head();
			len = call PacketTypes.dataPacketToStr(&localDataPacket, localBuf);
			if(call UartStream.send(localBuf, len)==SUCCESS)
				call DataQueue.dequeue();
			else
				post forwardNextPacketTask();
		}
		if(!call StatusQueue.empty())
		{
			localStatusPacket = call StatusQueue.head();
			len = call PacketTypes.statusPacketToStr(&localStatusPacket, localBuf);
			if(call UartStream.send(localBuf, len)==SUCCESS)
				call StatusQueue.dequeue();
			else
				post forwardNextPacketTask();
		}
		if(!call CommandQueue.empty())
		{
			localCommandPacket = call CommandQueue.head();
			len = call PacketTypes.commandPacketToStr(&localCommandPacket, localBuf);
			if(call UartStream.send(localBuf, len)==SUCCESS)
				call CommandQueue.dequeue();
			else
				post forwardNextPacketTask();
		}
		if(!call DataQueue.empty() || !call StatusQueue.empty() || !call CommandQueue.empty())
			post forwardNextPacketTask();
	}
}