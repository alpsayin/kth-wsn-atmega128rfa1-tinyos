
#include "atm128hardware.h"
#include "avr/interrupt.h"

module Uart1InterruptsP
{
	provides interface SerialInterrupts as Uart1Interrupts;
	uses interface Leds;
}
implementation
{
	uint8_t privReceivedByte=0;
	async command void Uart1Interrupts.enableTxInterrupt()
	{
    	SET_BIT(UCSR1A, TXC1);
		SET_BIT(UCSR1B, TXCIE1);
	}

	async command void Uart1Interrupts.clearRxInterrupt()
	{		
		CLR_BIT(UCSR1A, RXC1);
	}

	async command void Uart1Interrupts.disableRxInterrupt()
	{
		CLR_BIT(UCSR1B, RXCIE1);
	}

	async command void Uart1Interrupts.clearTxInterrupt()
	{
    	CLR_BIT(UCSR1A, TXC1);
	}

	async command void Uart1Interrupts.enableRxInterrupt()
	{
		SET_BIT(UCSR1B, RXCIE1);
	}

	async command void Uart1Interrupts.disableTxInterrupt()
	{
		CLR_BIT(UCSR1B, TXCIE1);
	}

	async command void Uart1Interrupts.setSendData()
	{
		SET_BIT(UCSR1A, TXC1);
	}

	async command bool Uart1Interrupts.isTxInterruptPending()
	{
		return READ_BIT(UCSR1A, TXC1);
	}

	async command bool Uart1Interrupts.isRxInterruptPending()
	{
		return READ_BIT(UCSR1A, RXC1);
	}
	
	default async event void Uart1Interrupts.rxInterruptHandler(uint8_t byte) { }
	default async event void Uart1Interrupts.txInterruptHandler() { }

	  
	AVR_ATOMIC_HANDLER(USART1_RX_vect/*__vector_36*/) 
	{
		if (READ_BIT(UCSR1A, RXC1)) 
		{
			privReceivedByte = UDR1;
			//debug
//			UDR1 = privReceivedByte;
			signal Uart1Interrupts.rxInterruptHandler(privReceivedByte);
    	}
  	}
	  
  
  	AVR_ATOMIC_HANDLER(USART1_TX_vect/*__vector_38*/) 
  	{
  		signal Uart1Interrupts.txInterruptHandler();
  	}
}