

#include "atm128hardware.h"

#define RX_BUFFER_SIZE 64
#define TX_BUFFER_SIZE 64

module ApplicationSerialP
{
	provides interface Init as Uart1Init;
	provides interface UartByte as Uart1Byte;
	provides interface UartStream as Uart1Stream;
	
	provides interface SerialInterrupts as Uart1Interrupts;
	
//	provides interface Init as Uart0Init;
//	provides interface UartStream as UartStream0;
//	provides interface SerialInterrupts as Uart0Interrupts;
	
}
implementation
{

	command error_t Uart1Init.init()
	{
		uint16_t brr = 34;
		
		CLR_BIT(UCSR1A, RXC1);
		CLR_BIT(UCSR1A, TXC1);	//clear rx & tx complete flags
		
		SET_BIT(UCSR1A, U2X1);  //enable double rate
		
		CLR_BIT(UCSR1B, UDRIE1);
		CLR_BIT(UCSR1B, UCSZ12);  //disable data register empty interrupt & set character size bit 3 to 0 = 0x011
		
		SET_BIT(UCSR1B, RXCIE1);
		SET_BIT(UCSR1B, TXCIE1);  // enable rx intr, tx intr
		
		SET_BIT(UCSR1B, RXEN1);
		SET_BIT(UCSR1B, TXEN1);  // enable rx, tx
		
		CLR_BIT(UCSR1C, UMSEL11);
		CLR_BIT(UCSR1C, UMSEL10);
		CLR_BIT(UCSR1C, UPM11);
		CLR_BIT(UCSR1C, UPM10);
		CLR_BIT(UCSR1C, UCPOL1);
		
		SET_BIT(UCSR1C, UCSZ11);
		SET_BIT(UCSR1C, UCSZ10); //set character size
		
		UBRR1H = (uint8_t)(brr>>8);
		UBRR1L = (uint8_t)(brr&0xFF);
		
		return SUCCESS;
	}


	async command error_t Uart1Stream.disableReceiveInterrupt()
	{
		call Uart1Interrupts.clearRxInterrupt();
		return SUCCESS;
	}

	async command error_t Uart1Stream.receive(uint8_t *buf, uint16_t len)
	{
		uint16_t i;
		for(i=0; i<len; i++)
		{
			if( call Uart1Byte.receive(&(buf[i]), 0xFF) == FAIL)
				return FAIL;
		}
		return SUCCESS;
	}

	async command error_t Uart1Stream.send(uint8_t *buf, uint16_t len)
	{
//		static bool busy = FALSE;
		uint16_t i;
		
//		if(busy)
//			return FAIL;
//		busy = TRUE;	
		
		for(i=0; i<len; i++)
		{
			if(call Uart1Byte.send(buf[i]) == FAIL)
				return FAIL;		
		}
//		busy = FALSE;
		
		return SUCCESS;
	}

	async command error_t Uart1Byte.send(uint8_t byte)
	{
//		static bool busy = FALSE;
//		if(busy)
//			return FAIL;
//		busy = TRUE;
		call Uart1Interrupts.clearTxInterrupt();
		call Uart1Interrupts.disableTxInterrupt();
		UDR1 = byte;
		call Uart1Interrupts.setSendData();
		while( !call Uart1Interrupts.isTxInterruptPending() );
		call Uart1Interrupts.clearTxInterrupt();
		call Uart1Interrupts.enableTxInterrupt();
//		busy = FALSE;
		
		return SUCCESS;
	}

	async command error_t Uart1Byte.receive(uint8_t *byte, uint8_t timeout)
	{
//		static bool busy = FALSE;
		uint16_t biggerTimeout = ((uint16_t)timeout)<<8;
		
//		if(busy)
//			return FAIL;
//		busy = TRUE;
		
		call Uart1Interrupts.disableRxInterrupt(); 
		call Uart1Interrupts.clearRxInterrupt();
		while(biggerTimeout /**|| timeout==0**/)
		{
			if( call Uart1Interrupts.isRxInterruptPending() )
			{
				*byte = UDR1;
				call Uart1Interrupts.clearRxInterrupt();
				call Uart1Interrupts.enableRxInterrupt();
//				busy = FALSE;
				return SUCCESS;
			}				
			biggerTimeout--;
		}
		call Uart1Interrupts.clearRxInterrupt();
		call Uart1Interrupts.enableRxInterrupt();
		
//		busy = FALSE;
		return FAIL;
	}
	
	
	async command error_t Uart1Stream.enableReceiveInterrupt()
	{
		call Uart1Interrupts.enableRxInterrupt();
		return SUCCESS;
	}
	

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
}