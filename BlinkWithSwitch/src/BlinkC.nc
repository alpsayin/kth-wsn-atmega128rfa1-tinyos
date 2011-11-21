// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

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

