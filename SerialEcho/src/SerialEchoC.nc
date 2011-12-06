
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
	}
}
implementation
{
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
		// TODO Auto-generated method stub
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
//		call Leds.led1Toggle();
	}

	event void Timer0.fired()
	{
		uint8_t msgBuf[32];
		uint8_t msgLen;
	}

	event void Timer1.fired()
	{
		uint8_t msgBuf[32];
		uint8_t msgLen;
	}
	task void processReceiveBufferTask()
	{
		//TODO atomic copy of receive buffer to a local buffer	
    	char localBuf[64];
		uint8_t type;
	    data_packet_t localDataPacket;
	    command_packet_t localCommandPacket;
	    status_packet_t localStatusPacket;
	    
	    atomic {
	    	strncpy(localBuf, receiveBuffer, pos);	
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
}