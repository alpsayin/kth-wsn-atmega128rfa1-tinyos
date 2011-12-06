
#include "packet_types.h"
#include <stdio.h>
#include "TimerConfig.h"
	
#ifndef LOW
#define LOW(n) (n & 0x0F)
#endif

#ifndef HIGH
#define HIGH(n) ((n>>4) & 0x0F)
#endif

module SerialEchoC @safe() 
{
	uses
	{
		interface Leds;
		interface Boot;
		interface UartStream;
		interface UartByte;
		interface Timer<TMilli> as Timer0;
		interface Timer<TMilli> as Timer1;
		interface PacketTypes;
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
		call Timer0.startPeriodic(1000);
		call Timer1.startPeriodicAt(500, 1000);
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
            atomic{
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
        	atomic{
            	receiveBuffer[pos++]=byte;
        	}
        }
	}

	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error)
	{
		//TODO  UartStream.sendDone not used
	}

	event void Timer0.fired()
	{
		
	}

	event void Timer1.fired()
	{
		
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
			call Leds.led1Toggle();
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
		// TODO check if busy, if not send else return busy
    	uint8_t localBuf[64];
		uint8_t len;
	    command_packet_t localCommandPacket;
	    
	    localCommandPacket = val;
	    len = call PacketTypes.commandPacketToStr(&localCommandPacket, localBuf);
	    return call UartStream.send(localBuf, len);
	}

	async command error_t ForwardData.setNow(data_packet_t val)
	{
		// TODO check if busy, if not send else return busy
    	uint8_t localBuf[64];
		uint8_t len;
	    data_packet_t localDataPacket;
	    
	    localDataPacket = val;
	    len = call PacketTypes.dataPacketToStr(&localDataPacket, localBuf);
	    return call UartStream.send(localBuf, len);
	}

	async command error_t ForwardStatus.setNow(status_packet_t val)
	{
		// TODO check if busy, if not send else return busy
    	uint8_t localBuf[64];
		uint8_t len;
	    status_packet_t localStatusPacket;
	    
	    localStatusPacket = val;
	    len = call PacketTypes.statusPacketToStr(&localStatusPacket, localBuf);
	    return call UartStream.send(localBuf, len);
	}
}