

#include "atm128hardware.h"
#include "hardware.h"

module ApplicationSerialP
{
	provides interface Init as Uart1Init;
	provides interface UartByte as Uart1Byte;
	provides interface UartStream as Uart1Stream;
	provides interface McuPowerOverride as Uart1PowerOverride;
	
	uses interface SerialInterrupts as Uart1Interrupts;
	
	uses interface Leds;
//	provides interface Init as Uart0Init;
//	provides interface UartStream as UartStream0;
//	provides interface SerialInterrupts as Uart0Interrupts;
	
}
implementation
{
	bool rxBusy, txBusy;
	norace uint8_t *txBuf, *rxBuf;
	norace uint16_t txLen, rxLen;
	norace error_t txResult, rxResult;
	norace uint8_t recvBuffer[RX_BUFFER_SIZE];
	
	task void sendDoneTask();
	task void receiveDoneTask();
	
	command error_t Uart1Init.init()
	{
		uint16_t brr = 34;
		
		CLR_BIT(UCSR1A, RXC1);
		CLR_BIT(UCSR1A, TXC1);	//clear rx & tx complete flags
		
		SET_BIT(UCSR1A, U2X1);  //enable double rate
		
		CLR_BIT(UCSR1B, UDRIE1);
		CLR_BIT(UCSR1B, UCSZ12);  //disable data register empty interrupt & set character size bit 3 to 0 = 0x011
		
		SET_BIT(UCSR1B, RXCIE1);	//enable rx intr
		SET_BIT(UCSR1B, TXCIE1);  // enable tx intr
		
		SET_BIT(UCSR1B, RXEN1); //enable rx
		SET_BIT(UCSR1B, TXEN1);  // enable tx
		
		CLR_BIT(UCSR1C, UMSEL11);
		CLR_BIT(UCSR1C, UMSEL10);
		CLR_BIT(UCSR1C, UPM11);
		CLR_BIT(UCSR1C, UPM10);
		CLR_BIT(UCSR1C, UCPOL1);
		
		SET_BIT(UCSR1C, UCSZ11);
		SET_BIT(UCSR1C, UCSZ10); //set character size
		
		UBRR1H = (uint8_t)(brr>>8);
		UBRR1L = (uint8_t)(brr&0xFF);
		
		atomic
		{
			rxBusy = FALSE;
		}
		atomic
		{
			txBusy = FALSE;
		}
		return SUCCESS;
	}


	async command error_t Uart1Stream.disableReceiveInterrupt()
	{
		call Uart1Interrupts.disableRxInterrupt();
		return SUCCESS;
	}

	async command error_t Uart1Stream.receive(uint8_t *buf, uint16_t len)
	{
		uint16_t i;
		atomic
		{
			if(rxBusy)
				return FAIL;
			rxBusy = TRUE;	
		}
		rxBuf = buf;
		rxLen = len;
		for(i=0; i<len; i++)
		{
			if( call Uart1Byte.receive(&(buf[i]), 0xFF) == FAIL)
			{
				rxResult = FAIL;	
				atomic
				{
					rxBusy = FALSE;
				}	
				return FAIL;
			}
		}
		rxResult = SUCCESS;
		post receiveDoneTask();
		atomic
		{
			rxBusy = FALSE;
		}
		return SUCCESS;
	}

	async command error_t Uart1Stream.send(uint8_t *buf, uint16_t len)
	{
		uint16_t i;
		atomic
		{
			if(txBusy)
				return FAIL;
			txBusy = TRUE;	
		}
		txBuf = buf;
		txLen = len;
		for(i=0; i<len; i++)
		{
//			call Uart1Interrupts.clearTxInterrupt();
			call Uart1Interrupts.disableTxInterrupt();
			while(!READ_BIT(UCSR1A, UDRE1));
			UDR1 = buf[i];
//			call Uart1Interrupts.setSendData();
			while( !call Uart1Interrupts.isTxInterruptPending() );
//			call Uart1Interrupts.clearTxInterrupt();
			call Uart1Interrupts.enableTxInterrupt();
		}
		atomic
		{
			txBusy = FALSE;
		}
		txResult = SUCCESS;
		post sendDoneTask();
		return SUCCESS;
	}

	async command error_t Uart1Byte.send(uint8_t byte)
	{
		atomic
		{
			if(txBusy)
				return FAIL;
			txBusy = TRUE;
		}
		call Uart1Interrupts.clearTxInterrupt();
		call Uart1Interrupts.disableTxInterrupt();
		UDR1 = byte;
		call Uart1Interrupts.setSendData();
		while( !call Uart1Interrupts.isTxInterruptPending() );
		call Uart1Interrupts.clearTxInterrupt();
		call Uart1Interrupts.enableTxInterrupt();
		atomic
		{
			txBusy = FALSE;
		}
		return SUCCESS;
	}

	async command error_t Uart1Byte.receive(uint8_t *byte, uint8_t timeout)
	{
		uint16_t biggerTimeout = ((uint16_t)timeout)<<8;
		
		atomic
		{
			if(rxBusy)
				return FAIL;
			rxBusy = TRUE;
		}
		call Uart1Interrupts.disableRxInterrupt(); 
		call Uart1Interrupts.clearRxInterrupt();
		while(biggerTimeout || timeout==0)
		{
			if( call Uart1Interrupts.isRxInterruptPending() )
			{
				*byte = UDR1;
				call Uart1Interrupts.clearRxInterrupt();
				call Uart1Interrupts.enableRxInterrupt();
				atomic
				{
					rxBusy = FALSE;
				}
				return SUCCESS;
			}				
			biggerTimeout--;
		}
		call Uart1Interrupts.clearRxInterrupt();
		call Uart1Interrupts.enableRxInterrupt();
		atomic
		{
			rxBusy = FALSE;
		}
		return FAIL;
	}
	
	
	async command error_t Uart1Stream.enableReceiveInterrupt()
	{
		call Uart1Interrupts.enableRxInterrupt();
		return SUCCESS;
	}
	
	async event void Uart1Interrupts.rxInterruptHandler(uint8_t byte)
	{
		// for debugging
//		call Uart1Byte.send(byte);
		call Leds.led0Toggle();
		
	}
	
	async event void Uart1Interrupts.txInterruptHandler()
	{
		call Leds.led1Toggle();	
	}

	task void sendDoneTask()
	{ 
		signal Uart1Stream.sendDone(txBuf, txLen, txResult); 
	}
	
	task void receiveDoneTask() 
	{ 
		signal Uart1Stream.receiveDone(rxBuf,  rxLen, rxResult); 
	}

	

	async command mcu_power_t Uart1PowerOverride.lowestState()
	{
		return ATM128_POWER_IDLE;
	}
}