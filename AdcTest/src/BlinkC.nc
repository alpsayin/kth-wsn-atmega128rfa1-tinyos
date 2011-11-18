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
  uses interface Read<uint16_t> as Temp0_Read;
  uses interface Read<uint16_t> as Vol0_Read;
//  uses interface Read<uint16_t> as Ext0_Read;
  uses interface Leds;
  uses interface Boot;
  
  provides interface Atm128AdcConfig;
  //uses interface UDPClient;
  
  uses interface UartByte as SerialByte;
  uses interface UartStream as SerialStream;
  
}
implementation
{
	uint8_t adcConf[8];
	uint8_t msgBuf[128];
	uint8_t msgLen;
  event void Boot.booted()
  {
  	DDRF &= ~1;
  	DIDR0 |= 1;
    call Timer0.startPeriodic( 500 );
    call Timer1.startPeriodic( 1000 );
    call Timer2.startPeriodic( 100 );
    
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


  event void Timer0.fired()
  {
    dbg("BlinkC", "Timer 0 fired @ %s.\n", sim_time_string());
		
    call Leds.led0Toggle();
//    call Vol0_Read.read();
  }
  
  event void Timer1.fired()
  {
    dbg("BlinkC", "Timer 1 fired @ %s \n", sim_time_string());
    call Leds.led1Toggle();
    
  }
  
  event void Timer2.fired()
  {
  	uint8_t i;
    dbg("BlinkC", "Timer 2 fired @ %s.\n", sim_time_string());
    call Leds.led2Toggle();
    call Temp0_Read.read();
//    adcConf[0] = ADCSRA;
//    adcConf[1] = ADCSRB;
//    adcConf[2] = ADCSRC;
//    adcConf[3] = ADMUX;
//    adcConf[4] = DIDR0;
//    adcConf[5] = 0;
//    adcConf[6] = 0;
//    adcConf[7] = 0;
//    
//	call SerialByte.send('\n');
//    for(i=0; i<8; i++)
//    {
//    	call SerialByte.send(hexTable[HIGH(adcConf[i])]);
//    	call SerialByte.send(hexTable[LOW(adcConf[i])]);
//    	call SerialByte.send(' ');
//    }
//	call SerialByte.send('\n');
    
  }


	event void Temp0_Read.readDone(error_t result, uint16_t val){
		// TODO Auto-generated method stub
//		call SerialByte.send('T');
//		print_num(val);
		msgLen = sprintf(msgBuf, "%d\n", val);
		call SerialStream.send(msgBuf, msgLen);
		call Leds.led2Toggle();
		
	}

	event void Vol0_Read.readDone(error_t result, uint16_t val){
		// TODO Auto-generated method stub
		call SerialByte.send('V');
//		print_num(val);
		call Leds.led0Toggle();
		
	}

	async event void SerialStream.receiveDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

	async event void SerialStream.receivedByte(uint8_t byte){
		// TODO Auto-generated method stub
	}

	async event void SerialStream.sendDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}



  async command uint8_t Atm128AdcConfig.getChannel()
  {
    // select the 1.23V (V_BG). Reference: Table 22-11, page 429 from the Atmega128rfa1
    return ATM128_ADC_SNGL_ADC0;
  }

  async command uint8_t Atm128AdcConfig.getRefVoltage()
  {
    return ATM128_ADC_VREF_1_6;
  }

  async command uint8_t Atm128AdcConfig.getPrescaler()
  {
    return ATM128_ADC_PRESCALE_128;		//changed by zn from ATM128_ADC_PRESCALE : 20111114
  }

//	event void Ext0_Read.readDone(error_t result, uint16_t val){
//		// TODO Auto-generated method stub
//	}
}
