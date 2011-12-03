
#include "packet_types.h"
#include <stdio.h>
#include <util/delay.h>

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
	uint8_t i;
	command_packet_serial_t myCommandPacket;
	
	event void Boot.booted()
	{
		myCommandPacket.address = 0;
		myCommandPacket.HE = 0;
		myCommandPacket.BE = 0;
		myCommandPacket.WE = 0;
		myCommandPacket.opcode = COMMAND_CONFIGURE;
		myCommandPacket.value = 0;
		
		call Timer1.startPeriodic(500);
	}

	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// TODO Auto-generated method stub
	}

	uint8_t tempBuf[sizeof(command_packet_serial_t)];
	uint8_t tempPtr=0;
	async event void UartStream.receivedByte(uint8_t byte)
	{
		static uint8_t intPtr;
		atomic {
			intPtr = tempPtr;
		}
//		if(cmdLen == 0)
//		{
//			cmdLen = byte;		
//			cmdPtr = (uint8_t*)&myCommandPacket;
//		}
//		else
		{
			tempBuf[intPtr] = byte;
			intPtr++;
			call Leds.led1On();
			if(intPtr == sizeof(command_packet_serial_t))
			{
				atomic {
					strncpy((uint8_t*)(&myCommandPacket), tempBuf, sizeof(command_packet_serial_t));
				}
				intPtr = 0;
				call Leds.led1Off();
			}
		}
		call Timer0.stop();
		call Timer0.startOneShot(5000);
		atomic {
			tempPtr = intPtr;
		}
	}

	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error)
	{
		call Leds.led1Toggle();
		// TODO Auto-generated method stub
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
	int packetToStr(data_packet_t* dp, uint8_t* buf)
	{
	   return sprintf(buf, "[0x%x : 0x%x 0x%x 0x%x 0x%x 0x%x]",dp->source, dp->data1, dp->data2, dp->data3, dp->data4, dp->data5);
	}
	int compressedPacketToStr(compressed_data_packet_t* dpc, uint8_t* buf)
	{
	    return sprintf(buf, "[0x%x : 0x%x%x 0x%x%x 0x%x%x 0x%x%x]", dpc->source, dpc->highBytes.data1, dpc->lowBytes.data1 ,dpc->highBytes.data2, dpc->lowBytes.data2 ,dpc->highBytes.data3, dpc->lowBytes.data3 ,dpc->highBytes.data4, dpc->lowBytes.data4 );
	}
	int commandPacketToStr(command_packet_serial_t* cps, uint8_t* buf)
	{
	    return sprintf(buf, "[0x%x %x %x %x 0x%x 0x%x]\r\n", cps->opcode, cps->WE, cps->HE, cps->BE, cps->value, cps->address);
	}

	event void Timer0.fired()
	{
		atomic{
			tempPtr = 0;
		}
		call Leds.led1Off();
	}

	uint8_t* myptr = (uint8_t*)&myCommandPacket;
	event void Timer1.fired()
	{
		uint8_t msgBuf[32];
		uint8_t msgLen;
		atomic {
			msgLen = commandPacketToStr(&myCommandPacket, msgBuf);
		}
		call UartStream.send(msgBuf, msgLen);
	}
}