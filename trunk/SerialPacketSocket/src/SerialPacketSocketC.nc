
#include "packet_types.h"
#include <stdio.h>
#include "TimerConfig.h"
	
#ifndef LOW
#define LOW(n) (n & 0x0F)
#endif

#ifndef HIGH
#define HIGH(n) ((n>>4) & 0x0F)
#endif

module SerialPacketSocketC @safe() 
{
	uses
	{
		interface Leds;
		interface Boot;
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
		interface Notify<command_packet_t> as CommandNotification;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
	}
}
implementation
{
	//TODO implement a circular send buffer
	task void processReceiveBufferTask();
	task void forwardNextPacketTask();
	const uint8_t hexTable[16] = "0123456789abcdef";

    norace bool started;
    bool enabled;
    
    command_packet_t gCommandPacket;
    data_packet_t gDataPacket;
    status_packet_t gStatusPacket;
    
    char receiveBuffer[64];	
	norace uint8_t pos;
	event void Boot.booted()
	{
		call CommandNotification.enable();	
		call UartControl.start();
	}

	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// TODO  UartStream.receiveDone not used
	}
	async event void UartStream.receivedByte(uint8_t byte)
	{
        call UartByte.send(byte);
        if(byte == '[')
        {
            pos=0;
            atomic {
            	receiveBuffer[pos++]=byte;
            }
            started=1;
        }
        else if(byte == ']' && started)
        {
        	atomic{
	            receiveBuffer[pos++]=byte;
	            receiveBuffer[pos]=0;
            }
            started=0;
			post processReceiveBufferTask();
        }
        else if(started)
        {
        	atomic {
            	receiveBuffer[pos++]=byte;
        	}
        }
	}

	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error)
	{
		//TODO  UartStream.sendDone not used
	}
	
	task void processReceiveBufferTask()
	{
		//TODO atomic copy of receive buffer to a local buffer	
    	uint8_t localBuf[64];
		uint8_t type;
	    data_packet_t localDataPacket;
	    command_packet_t localCommandPacket;
	    status_packet_t localStatusPacket;
	    
	    atomic {
	    	strncpy((char*)localBuf, (char*)receiveBuffer, pos);	
    	}

	    type=call PacketTypes.getTypeOfPacket(localBuf);
	    if(type!=PACKET_ERROR)
	    {
	    	#ifdef DEBUG
			call Leds.led1Toggle();
			#endif
	    }
	    if(type == PACKET_COMMAND)
	    {
	        type=call PacketTypes.strToCommandPacket(&localCommandPacket, localBuf);
	        if(type == PACKET_ERROR)
	            return;
	        //TODO we don't need to copy actually, think about it
	        gCommandPacket = localCommandPacket;
			signal CommandNotification.notify(gCommandPacket);
	    }
	    else if(type == PACKET_DATA)
	    {
	        type=call PacketTypes.strToDataPacket(&localDataPacket, localBuf);
	        if(type == PACKET_ERROR)
	            return;
	    }
	    else if(type == PACKET_STATUS)
	    {
	        type=call PacketTypes.strToStatusPacket(&localStatusPacket, localBuf);
	        if(type == PACKET_ERROR)
	            return;
	    }
	}

	command error_t CommandNotification.disable()
	{
		if(started)
			return EBUSY;
		return SUCCESS;
	}

	command error_t CommandNotification.enable()
	{
		enabled=TRUE;
		started=FALSE;
		return SUCCESS;
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