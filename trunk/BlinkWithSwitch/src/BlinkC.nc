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
#include "printf.h"
#include "atm128hardware.h"
#include "MyDummyConstants.h"

module BlinkC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as Timer2;
  uses interface Leds;
  uses interface Boot;
  uses interface PushButton as PushButton0;  
  
  uses{ 
	  interface UartByte;
//	  interface UartStream;
	  interface StdControl as UartControl;
  }
}
implementation
{
	uint8_t myByte = 0x35;

  void sendLine(uint8_t* str, uint8_t len)
  {
  	uint8_t i;
	for(i=0; i<len; i++)
	{
		call UartByte.send(str[i]);	
	}	
	call UartByte.send(ENDL);
  }
  event void Boot.booted()
  {
  	call UartControl.start();
	
    call Timer0.startPeriodic( 250 );
    call Timer1.startPeriodic( 100 );
    call Timer2.startPeriodic( 1000 );
  }
 uint8_t once = 0;
  event void Timer0.fired()
  {
    unsigned char word;
    dbg("BlinkC", "Timer 0 fired @ %s.\n", sim_time_string());
    atomic
    {
    	call UartByte.send( ALP);
    	word = myByte;
    	word = word & 0xF0;
    	word = word >> 4;
    	word = hexTable[word];
    	call UartByte.send( word );
    	word = myByte;
    	word = word & 0x0F;
    	word = hexTable[word];
    	call UartByte.send( word );
    	call UartByte.send( ENDL );
    }
  }
  event void Timer1.fired()
  {
    dbg("BlinkC", "Timer 1 fired @ %s \n", sim_time_string());
	if(call PushButton0.get())
	{
		atomic
		{
			if(myByte & 0x01)
				call Leds.led0On();
			else
				call Leds.led0Off();
			if(myByte & 0x02)
				call Leds.led1On();
			else
				call Leds.led1Off();
			if(myByte & 0x04)
				call Leds.led2On();
			else
				call Leds.led2Off();
		}
	}
  }
  
  event void Timer2.fired()
  {
    dbg("BlinkC", "Timer 2 fired @ %s.\n", sim_time_string());
    atomic
    {
    	myByte++;
    }
  }

}

