
/**
 * Implementation for Blink application.  Toggle the red LED when a
 * Timer fires.
 **/

#include "Timer.h"
#include "MyDummyConstants.h"

module BlinkC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as Timer2;
  uses interface Leds;
  uses interface Boot;
  uses
  {
	interface Init as Uart1Init;
	interface UartStream as Uart1Stream;
	interface UartByte as Uart1Byte;
  }
}
implementation
{
  bool runOnce = TRUE;
  task void echoSerialTask();	

  event void Boot.booted()
  {
  	call Uart1Init.init();
    call Timer0.startPeriodic( 250 );
    call Timer1.startPeriodic( 500 );
    call Timer2.startPeriodic( 1000 );
  }
  
  task void echoSerialTask()
  {
  	uint8_t buf[1];
    if(call Uart1Byte.receive(buf, 255) == SUCCESS)
    {
		call Uart1Byte.send(buf[0]);
	}
    post echoSerialTask();
  }
 
  event void Timer0.fired()
  {
    dbg("BlinkC", "Timer 0 fired @ %s.\n", sim_time_string());
    if(runOnce)
    {
//	    post echoSerialTask();
	    runOnce = FALSE;
    }
    call Leds.led0Toggle();
  }
  
  event void Timer1.fired()
  {
    dbg("BlinkC", "Timer 1 fired @ %s \n", sim_time_string());
    call Leds.led1Toggle();
  }
  
  event void Timer2.fired()
  {
    dbg("BlinkC", "Timer 2 fired @ %s.\n", sim_time_string());
    call Leds.led2Toggle();
	call Uart1Stream.send("Hello World!\n", 13);
  }

	async event void Uart1Stream.sendDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

	async event void Uart1Stream.receivedByte(uint8_t byte){
		// TODO Auto-generated method stub
	}

	async event void Uart1Stream.receiveDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

}

