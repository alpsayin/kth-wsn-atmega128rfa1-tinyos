
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
	}
}
implementation
{
	const uint8_t hexTable[16] = "0123456789abcdef";

    char cmdLen=0;
    bool started=FALSE;
    bool newCommand=FALSE;
    bool high=TRUE;
    command_packet_t commandPacket;
    data_packet_t dataPacket;
    char* cmdBuf = (char*)&commandPacket;
	
	char asciihexToNum(char c)
	{
	    if(c>='a' && c<='z')
	        return c-'a'+10;
	    if(c>='A' && c<='Z')
	        return c-'A'+10;
	    if(c>='0' && c<='9')
	        return c-'0';
	    return 0;
	}
	
	void decompressPacket(data_packet_t* dp, compressed_data_packet_t* dpc)
	{
	    dp->source = dpc->source;
	    dp->data1 = ( (uint16_t)(dpc->highBytes.data1)<<8 | dpc->lowBytes.data1);
	    dp->data2 = ( (uint16_t)(dpc->highBytes.data2)<<8 | dpc->lowBytes.data2);
	    dp->data3 = ( (uint16_t)(dpc->highBytes.data3)<<8 | dpc->lowBytes.data3);
	    dp->data4 = ( (uint16_t)(dpc->highBytes.data4)<<8 | dpc->lowBytes.data4);
	    dp->data5 = ( (uint16_t)(dpc->highBytes.data5)<<8 | dpc->lowBytes.data5);
	}
	void compressPacket(data_packet_t* dp, compressed_data_packet_t* dpc)
	{
	    dpc->source = dp->source;
	
	    dpc->lowBytes.data1 = (uint8_t)(dp->data1&0xFF);
	    dpc->highBytes.data1 = (uint8_t)((dp->data1>>8)&0x03);
	
	    dpc->lowBytes.data2 = (uint8_t)(dp->data2&0xFF);
	    dpc->highBytes.data2 = (uint8_t)((dp->data2>>8)&0x03);
	
	    dpc->lowBytes.data3 = (uint8_t)(dp->data3&0xFF);
	    dpc->highBytes.data3 = (uint8_t)((dp->data3>>8)&0x03);
	
	    dpc->lowBytes.data4 = (uint8_t)(dp->data4&0xFF);
	    dpc->highBytes.data4 = (uint8_t)((dp->data4>>8)&0x03);
	
	    dpc->lowBytes.data5 = (uint8_t)(dp->data5&0xFF);
	    dpc->highBytes.data5 = (uint8_t)((dp->data5>>8)&0x03);
	}
	int packetToStr(void* dp, char* buf, uint8_t pt)
	{
	    uint8_t i=0, len;
	    char* ptr;
	    buf[i++]='[';
	    buf[i++]=hexTable[pt];
	    buf[i++]=':';
	    switch(pt)
	    {
	        case PACKET_COMMAND: len = sizeof(command_packet_t); break;
	        case PACKET_DATA: len = sizeof(data_packet_t); break;
	        case PACKET_DATA_COMPRESSED: len = sizeof(compressed_data_packet_t); break;
	        case PACKET_STATUS: len = sizeof(status_packet_t); break;
	        default: len = 0;
	    }
	    for(ptr=(char*)dp; ptr<(char*)dp+len; ptr++)
	    {
	        buf[i++] = hexTable[HIGH((*ptr))];
	        buf[i++] = hexTable[LOW((*ptr))];
	    }
	    buf[i++] = ']';
	    buf[i++] = 0;
	    return i-1;
	}
	int strToPacket(void* dp, char* buf)
	{
	    uint8_t i=0, len, type;
	    char* ptr = (char*)dp;
	    if(buf[i++] != '[')
	        return PACKET_ERROR;
	    switch( (type=LOW(buf[i++])) )
	    {
	        case PACKET_COMMAND: len = sizeof(command_packet_t); break;
	        case PACKET_DATA: len = sizeof(data_packet_t); break;
	        case PACKET_DATA_COMPRESSED: len = sizeof(compressed_data_packet_t); break;
	        case PACKET_STATUS: len = sizeof(status_packet_t); break;
	        default: return PACKET_ERROR;
	    }
	    if(buf[i++] != ':')
	        return PACKET_ERROR;
	    if(buf[i+2*len] != ']')
	        return PACKET_ERROR;
	    for(ptr=(char*)dp; ptr<(char*)dp+len; ptr++) 
	    {
	        *ptr = (asciihexToNum(buf[i++])<<4) | asciihexToNum(buf[i++]);
	    }
	    if(buf[i] != ']')
	        return PACKET_ERROR;
	    return type;
	}
	
	
	event void Boot.booted()
	{
		commandPacket.address = 0;
		commandPacket.HE = 0;
		commandPacket.BE = 0;
		commandPacket.WE = 0;
		commandPacket.opcode = COMMAND_CONFIGURE;
		commandPacket.value = 0;
		
		dataPacket.data1 = 0xff;
		dataPacket.data2 = 0xff;
		dataPacket.data3 = 0xff;
		dataPacket.data4 = 0xff;
		dataPacket.data5 = 0xff;
		dataPacket.source = 0xffff;
		
		call Timer0.startPeriodic(1000);
//		call Timer1.startPeriodic(1000);
	}

	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// TODO Auto-generated method stub
	}
	async event void UartStream.receivedByte(uint8_t byte)
	{
	    char msgBuf[64];
	    char msgLen;
	    
        call UartByte.send(byte);
        if(byte=='[')
        {
            cmdBuf = (char*)&commandPacket;
            cmdLen = 0;
			call Leds.set(0);
            started = TRUE;
        }
        else if(byte==']')
        {
            if(cmdLen == sizeof(command_packet_t))
            {
                newCommand = TRUE;
            }
            started = FALSE;
            cmdLen = 0;
        }
        else if(started)
        {
            if(high)
                cmdBuf[cmdLen] = asciihexToNum(byte)<<4;
            else
                cmdBuf[cmdLen++] |= asciihexToNum(byte);
            high = !high;
            call Leds.set(cmdLen);
        }
        if(newCommand)
        {
            msgLen = packetToStr(&commandPacket, msgBuf, PACKET_COMMAND);
            call UartStream.send(msgBuf, msgLen);
            newCommand = FALSE;
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
//		dataPacket.data1++;
//		dataPacket.data2++;
//		dataPacket.data3++;
//		dataPacket.data4++;
//		dataPacket.data5++;
		msgLen = packetToStr(&dataPacket, msgBuf, PACKET_DATA);
//		msgLen = sprintf(msgBuf, "%d\n", sizeof(dataPacket));
		call UartStream.send(msgBuf, msgLen);
	}

	uint8_t* myptr = (uint8_t*)&commandPacket;
	event void Timer1.fired()
	{
		uint8_t msgBuf[32];
		uint8_t msgLen;
		atomic {
			msgLen = packetToStr(&commandPacket, msgBuf, PACKET_COMMAND);
		}
		if(call UartStream.send(msgBuf, msgLen) == FAIL)
			call Leds.led0Toggle();
	}
}