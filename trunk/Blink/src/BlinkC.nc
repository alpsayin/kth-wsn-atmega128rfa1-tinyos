
/**
 * Implementation for Blink application.  Toggle the red LED when a
 * Timer fires.
 **/

#include "Timer.h"
#include "MyDummyConstants.h"
#include "atm128hardware.h"
#include "util/delay.h"


module BlinkC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as Timer2;
  uses interface Leds;
  uses interface Boot;
  uses interface PushButton;
  uses
  {
	interface UartStream as Uart1Stream;
	interface UartByte as Uart1Byte;
  }
  provides interface McuPowerOverride as BlinkPowerOverride;
}
implementation
{
	bool once;
	task void toggleLed0Task();	
	task void toggleLed1Task();	
	task void toggleLed2Task();
	uint8_t key;
	uint8_t buf[16];
	
  	event void Boot.booted()
	{   
//		while(call Uart1Byte.receive(&key, 255) == FAIL)
		while(call PushButton.get() == FALSE)
		{
			PORTE &= ~(1<<2); /* LED on */
	     	_delay_ms(500);
	      	PORTE |= 1<<2; /* LED off */
	      	_delay_ms(500);
		}
		call Timer0.startPeriodic( 250 );
    	call Timer1.startPeriodic( 500 );
    	call Timer2.startPeriodic( 1000 );
		once = FALSE;
  	}
 
  event void Timer0.fired()
  {
    post toggleLed0Task();
    if(!once)
    {		
    
    	if(call Uart1Stream.send(signature, signatureLength))
			call Uart1Byte.send('F');
		
		while(call Uart1Stream.send("Enter your name:\n", STRLEN("Enter your name:\n")) == EBUSY);
		call Uart1Stream.receive(buf, 16);
    	once = TRUE;	
    }
  }
  
  event void Timer1.fired()
  {
	post toggleLed1Task();
  }
  
  event void Timer2.fired()
  {
  	post toggleLed2Task();
  }

	async event void Uart1Stream.sendDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO do not do anything
	}

	async event void Uart1Stream.receivedByte(uint8_t byte)
	{
		// TODO do not do anything
		call Leds.set(byte);
		call Uart1Byte.send(byte);
		call Uart1Stream.send("ALP", 3);
	}

	async event void Uart1Stream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// TODO do not do anything
//		call Leds.set(error);
		if(error==SUCCESS)
			call Uart1Stream.send(buf, len);
		else
			call Uart1Byte.send(error);
	}

	task void toggleLed0Task()
	{
//		call Leds.led0Toggle();
	}	
	task void toggleLed1Task()
	{
//		call Leds.led1Toggle();
	}	
	task void toggleLed2Task()
	{
//		call Leds.led2Toggle();
////		call Uart1Byte.send(UCSR1A);
////		call Uart1Byte.send(UCSR1B);
////		call Uart1Byte.send(UCSR1C);
////		call Uart1Byte.send(0);
//		call Uart1Byte.send(hexTable[HIGH(UCSR1A)]);
//		call Uart1Byte.send(hexTable[LOW(UCSR1A)]);
//		call Uart1Byte.send(SPACE);
//		call Uart1Byte.send(hexTable[HIGH(UCSR1B)]);
//		call Uart1Byte.send(hexTable[LOW(UCSR1B)]);
//		call Uart1Byte.send(SPACE);
//		call Uart1Byte.send(hexTable[HIGH(UCSR1C)]);
//		call Uart1Byte.send(hexTable[LOW(UCSR1C)]);
//		call Uart1Byte.send(ENDL);
		call Uart1Stream.send("CAN", 3);
		
	}

	async command mcu_power_t BlinkPowerOverride.lowestState(){
		return ATM128_POWER_IDLE;
	}
}

