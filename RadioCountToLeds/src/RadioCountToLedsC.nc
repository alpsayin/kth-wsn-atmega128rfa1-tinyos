// $Id: RadioCountToLedsC.nc,v 1.7 2010-06-29 22:07:17 scipio Exp $

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
 
#include "Timer.h"
#include "RadioCountToLeds.h"
 
/**
 * Implementation of the RadioCountToLeds application. RadioCountToLeds 
 * maintains a 4Hz counter, broadcasting its value in an AM packet 
 * every time it gets updated. A RadioCountToLeds node that hears a counter 
 * displays the bottom three bits on its LEDs. This application is a useful 
 * test to show that basic AM communication and timers work.
 *
 * @author Philip Levis
 * @date   June 6 2005
 */
 
 #include <stdio.h>
 #include "MyDummyConstants.h"

module RadioCountToLedsC @safe() {
  uses {
    interface Leds;
    interface Boot;
//    interface Receive;
//    interface AMSend;
    interface Timer<TMilli> as MilliTimer;
//    interface SplitControl as AMControl;
//    interface Packet;


    
    interface UartByte;
    interface UartStream;
  }
  
	uses
	{
		interface SplitControl as Ieee154Control;

		interface Ieee154Send;
		interface Receive as Ieee154Receive;

		interface Packet;
		interface Ieee154Packet;

	}
}
implementation {

  message_t packet;

  bool locked;
  uint16_t counter = 0;
  
  event void Boot.booted() 
  {
//    call AMControl.start();
	 call Ieee154Control.start();
  }

//  event void AMControl.startDone(error_t err) {
//    if (err == SUCCESS) {
//      call MilliTimer.startPeriodic(1000);
//    }
//    else {
//      call AMControl.start();
//    }
//  }

//  event void AMControl.stopDone(error_t err) {
//    // do nothing
//  }

	task void sendMessageTask()
	{
		uint16_t intCounter;
		atomic{
			intCounter = counter;
		}
	    dbg("RadioCountToLedsC", "RadioCountToLedsC: timer fired, counter is %hu.\n", counter);
	    if (locked) {
	      return;
	    }
	    else {
	    
	      radio_count_msg_t* rcm = (radio_count_msg_t*)call Packet.getPayload(&packet, sizeof(radio_count_msg_t));
	      if (rcm == NULL) {
			return;
	      }
	
	      rcm->counter = intCounter;
	      if (call Ieee154Send.send( IEEE154_BROADCAST_ADDR, &packet, sizeof(radio_count_msg_t)) == SUCCESS) {
			dbg("RadioCountToLedsC", "RadioCountToLedsC: packet sent.\n", counter);	
			call UartByte.send(intCounter);
			locked = TRUE;
	      }
	    }
	}
  
  event void MilliTimer.fired() {
//    counter++;
//    post sendMessageTask();
  }

  event message_t* Ieee154Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
	uint8_t msgBuf[32];
	uint8_t msgLen;
    dbg("RadioCountToLedsC", "Received packet of length %hhu.\n", len);
    if (len != sizeof(radio_count_msg_t)) {return bufPtr;}
    else {
      radio_count_msg_t* rcm = (radio_count_msg_t*)payload;
      msgLen = sprintf(msgBuf, "received number = %d\n", rcm->counter);
      call UartStream.send(msgBuf, msgLen);
      if (rcm->counter & 0x1) {
	call Leds.led0On();
      }
      else {
	call Leds.led0Off();
      }
      if (rcm->counter & 0x2) {
	call Leds.led1On();
      }
      else {
	call Leds.led1Off();
      }
      if (rcm->counter & 0x4) {
	call Leds.led2On();
      }
      else {
	call Leds.led2Off();
      }
      return bufPtr;
    }
  }

  event void Ieee154Send.sendDone(message_t* bufPtr, error_t error) {
    if (&packet == bufPtr) {
      locked = FALSE;
    }
  }


	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

	async event void UartStream.receivedByte(uint8_t byte){
		atomic{
		counter = byte;
		}
		
    	post sendMessageTask();	
	}

	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}


	event void Ieee154Control.startDone(error_t error){
	uint8_t msgBuf[32];
	uint8_t msgLen;
	    if (error == SUCCESS) {
	    	msgLen = sprintf(msgBuf, "this guy's 15.4 address is %d\n", call Ieee154Packet.address());
	      call UartStream.send(msgBuf, msgLen);
	      call MilliTimer.startPeriodic(1000);
	    }
	    else {
	      call Ieee154Control.start();
	    }
	}

	event void Ieee154Control.stopDone(error_t error){
		// TODO Auto-generated method stub
	}

}




