// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the University of California nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/**
 * Implementation for Blink application.  Toggle the red LED when a
 * Timer fires.
 **/

#include "Timer.h"
#include "MyDummyConstants.h"
#include <stdio.h>

module BlinkC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as Timer2;
  uses interface Read<uint16_t> as TempSensor;
  uses interface Read<uint16_t> as Vol0;
  uses interface Read<uint16_t> as Vol1;
  uses interface Leds;
  uses interface Boot;
  
  uses interface UartByte as SerialByte;
  uses interface UartStream as SerialStream;
  
}
implementation
{
	
  uint8_t commandBuf[255];
  uint8_t commandLength;
  event void Boot.booted()
  {
  	DDRF &= ~1;
  	DIDR0 |= 1;
    call Timer0.startPeriodic( 500 );
    call Timer1.startPeriodic( 10000 );
    call Timer2.startPeriodic( 5000 );
  }

    bool print_num(uint16_t val){
    	static char count = 0;
    	char a,b,c,d;
    	
    	a = hexTable[HIGH(val>>8)];
    	b = hexTable[LOW(val>>8)];
    	c = hexTable[HIGH(val)];
    	d = hexTable[LOW(val)];
    	
    	call SerialByte.send('0');
		call SerialByte.send('x');
		call SerialByte.send(a);
		call SerialByte.send(b);
		call SerialByte.send(c);
		call SerialByte.send(d);
		call SerialByte.send('|');
		
		count ++;
		if(8 == count){
			call SerialByte.send('\r');
			call SerialByte.send('\n');
			count = 0;
		}
		
    	return SUCCESS;
    }
    
  task void tempSensorReadTask()
  {
	uint8_t msgBuf[32];
	uint8_t msgLen;
  	error_t retVal1;
    retVal1 = call TempSensor.read();
    msgLen = sprintf(msgBuf, "error code for temp0.read = %d\r\n", retVal1);
    call SerialStream.send(msgBuf, msgLen);
  }
  
  task void vol0ReadTask()
  {
	uint8_t msgBuf[32];
	uint8_t msgLen;
  	error_t retVal1;
    retVal1 = call Vol0.read();
    msgLen = sprintf(msgBuf, "error code for vol0.read = %d\n", retVal1);
    call SerialStream.send(msgBuf, msgLen);
  }
  
  task void vol1ReadTask()
  {
	uint8_t msgBuf[32];
	uint8_t msgLen;
  	error_t retVal1;
    retVal1 = call Vol1.read();
    msgLen = sprintf(msgBuf, "error code for vol1.read = %d\n", retVal1);
    call SerialStream.send(msgBuf, msgLen);
  }

  task void processCommandTask()
  {
  	atomic
  	{
	  	if(strcmp("t", commandBuf)==0)
	  		post tempSensorReadTask();
		if(strcmp("v0", commandBuf)==0)
			post vol0ReadTask();
		else if(strcmp("v1", commandBuf)==0)
			post vol1ReadTask();
		commandLength = 0;
	}
  }
  event void Timer0.fired()
  {
    call Leds.led0Toggle();
  }
  
  event void Timer1.fired()
  {
    call Leds.led1Toggle();
  }
  
  event void Timer2.fired()
  {
    call Leds.led2Toggle();
    
  }


	event void TempSensor.readDone(error_t result, uint16_t val){
	uint8_t msgBuf[32];
	uint8_t msgLen;
	uint16_t celsius = (uint16_t)((val*113.0f)-27220.0f);
		// TODO Auto-generated method stub
//		call SerialByte.send('T');
//		print_num(val);
		msgLen = sprintf(msgBuf, "Temp = %d.%d\r\n", celsius/100, celsius%100);
		call SerialStream.send(msgBuf, msgLen);
		call Leds.led1Toggle();
		
	}
	event void Vol0.readDone(error_t result, uint16_t val){
	uint8_t msgBuf[32];
	uint8_t msgLen;
		// TODO Auto-generated method stub
//		call SerialByte.send('T');
//		print_num(val);
		msgLen = sprintf(msgBuf, "Vol0 = %d\r\n", val);
		call SerialStream.send(msgBuf, msgLen);
		call Leds.led2Toggle();
		
	}
	event void Vol1.readDone(error_t result, uint16_t val){
	uint8_t msgBuf[32];
	uint8_t msgLen;
		// TODO Auto-generated method stub
//		call SerialByte.send('T');
//		print_num(val);
		msgLen = sprintf(msgBuf, "Vol1 = %d\r\n", val);
		call SerialStream.send(msgBuf, msgLen);
		call Leds.led2Toggle();
		
	}
	async event void SerialStream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		
	}

	async event void SerialStream.receivedByte(uint8_t byte)
	{
		call SerialByte.send(byte);
		atomic
		{
			if(byte == '\n')
			{
				if(commandBuf[commandLength-1]=='\r')
					commandBuf[commandLength-1] = 0;
				else
				{
					commandBuf[commandLength] = 0;
					commandLength++;
				}
				post processCommandTask();
			}
			else
			{
				commandBuf[commandLength] = byte;
				commandLength++;
			}
		}
	}

	async event void SerialStream.sendDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

//	event void Ext0_Read.readDone(error_t result, uint16_t val){
//		// TODO Auto-generated method stub
//	}
}
