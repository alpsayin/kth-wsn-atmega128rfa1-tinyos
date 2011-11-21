

#include "atm128hardware.h"
#include "hardware.h"

//#ifdef DISABLE_SPRINTF_WARNING
//#warning sprintf is problematic with non-blocking uartstream
//#endif

module Atm128Rfa1SerialP
{
	provides interface Init as Uart1Init;
	provides interface UartByte as Uart1Byte;
	provides interface UartStream as Uart1Stream;
	provides interface UartStream as Uart1StreamBlocking;
	provides interface McuPowerOverride as Uart1PowerOverride;

	uses interface SerialInterrupts as Uart1Interrupts;
	uses interface Counter<TMilli, uint32_t>;	
	uses interface Leds;
	
}
implementation
{
	volatile bool rxBusy, txBusy;
	norace uint8_t *txBuf, *rxBuf;
	norace uint16_t txLen, rxLen;
	norace uint16_t txPos, rxPos;
	norace error_t txResult, rxResult;
	norace uint8_t recvBuffer[RX_BUFFER_SIZE];
	norace uint8_t m_byte_time, rxUnexpectedByte;
	
	task void sendBlockingDoneTask();
	task void receiveBlockingDoneTask();

	task void sendDoneTask();
	task void receiveDoneTask();
	
	task void unexpectedByteReceivedTask();
	
	command error_t Uart1Init.init()
	{
		uint16_t brr = 34;	//baud=57600 if u2x=1
		m_byte_time = 68;	//due to baud=57600
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
			txBusy = FALSE;
			rxBuf = NULL;
			txBuf = NULL;
			rxPos = 0;
			txPos = 0;
			rxLen = 0;
			txLen = 0;
		}
		return SUCCESS;
	}
	
	async command error_t Uart1StreamBlocking.send(uint8_t *buf, uint16_t len)
	{
		uint16_t i;
		atomic
		{
			if(txBusy)
				return EBUSY;
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
		post sendBlockingDoneTask();
		return SUCCESS;
	}

	async command error_t Uart1StreamBlocking.receive(uint8_t *buf, uint16_t len)
	{
		uint16_t i;
		atomic
		{
			if(rxBusy)
				return EBUSY;
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
		post receiveBlockingDoneTask();
		atomic
		{
			rxBusy = FALSE;
		}
		return SUCCESS;
	}

	async command error_t Uart1Byte.send(uint8_t byte)
	{
		atomic
		{
			if(txBusy)
				return EBUSY;
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
		uint16_t timeout_milli = m_byte_time * timeout + 1;
    	uint32_t start;

		atomic
		{
			if(rxBusy)
				return EBUSY;
			rxBusy = TRUE;
		}
		
    	start = call Counter.get();
    	call Uart1Interrupts.disableRxInterrupt(); 
		call Uart1Interrupts.clearRxInterrupt();
		while( !call Uart1Interrupts.isRxInterruptPending() )
		{			
      		if ( ( call Counter.get() - start ) >= timeout_milli )
      		{
      			call Uart1Interrupts.clearRxInterrupt();
				call Uart1Interrupts.enableRxInterrupt();
				atomic
				{
					rxBusy = FALSE;
				}
      			return FAIL;
			}
		}
		*byte = UDR1;
		call Uart1Interrupts.clearRxInterrupt();
		call Uart1Interrupts.enableRxInterrupt();
		atomic
		{
			rxBusy = FALSE;
		}
		return SUCCESS;
	}
	
	async event void Uart1Interrupts.rxInterruptHandler(uint8_t byte)
	{
		if(rxBuf) //if we're receiving something large
		{
			if(rxPos < rxLen) //there are still some bytes to capture
			{
				rxBuf[ rxPos ] = byte;
				rxPos++;
				if(rxPos == rxLen) //finished
				{
					post receiveDoneTask();
				}
			}
		}
		else
		{
			rxUnexpectedByte = byte;
			post unexpectedByteReceivedTask();	
		}
		call Uart1Interrupts.clearRxInterrupt(); //for convenience
	}
	
	async event void Uart1Interrupts.txInterruptHandler()
	{
		if(txBuf != NULL) //means that we're sending something large
		{
			if( txPos < txLen ) //there are still some bytes to be sent
			{
				while(!READ_BIT(UCSR1A, UDRE1)); //for convenience, expected overhead is low
				UDR1 = txBuf[ txPos ];
				txPos++;
			}	
			else if( txPos == txLen )
			{
				txLen = 0;
				txPos = 0;
				txBuf = NULL;
				atomic
				{
					txBusy = FALSE;	
				}
				post sendDoneTask();
			}
		}
		call Uart1Interrupts.clearTxInterrupt(); //for convenience
	}

	async command error_t Uart1Stream.send(uint8_t *buf, uint16_t len)
	{
		return call Uart1StreamBlocking.send(buf, len);
		if(len==0)
			return FAIL;
		atomic
		{
			if(txBusy)
				return EBUSY;
			txBusy = TRUE;	
		}
		txBuf = buf;
		txLen = len;
		txPos = 0;
//		while(!READ_BIT(UCSR1A, UDRE1)); //for convenience, expected overhead is low
		UDR1 = txBuf[ txPos++ ];
		txResult = SUCCESS;
		return SUCCESS;
	}
	
	async command error_t Uart1Stream.receive(uint8_t *buf, uint16_t len)
	{
		if(len == 0)
			return FAIL;
		atomic
		{
			if(rxBusy)
				return EBUSY;
			rxBusy = TRUE;
		}
		rxBuf = buf;
		rxLen = len;
		rxPos = 0;
		call Uart1Stream.enableReceiveInterrupt(); //for convenience(e.g. some stupid may shut off the interrupts and call this function)
		return SUCCESS;
	}

	async command error_t Uart1Stream.disableReceiveInterrupt()
	{
		call Uart1Interrupts.disableRxInterrupt();
		return SUCCESS;
	}

	async command error_t Uart1Stream.enableReceiveInterrupt()
	{
		call Uart1Interrupts.enableRxInterrupt();
		return SUCCESS;
	}
	
	async command error_t Uart1StreamBlocking.enableReceiveInterrupt()
	{
		call Uart1Interrupts.enableRxInterrupt();
		return SUCCESS;
	}

	async command error_t Uart1StreamBlocking.disableReceiveInterrupt()
	{
		call Uart1Interrupts.disableRxInterrupt();
		return SUCCESS;
	}
		
	default async event void Uart1StreamBlocking.sendDone(uint8_t* buf, uint16_t len, error_t err) {}
  	default async event void Uart1StreamBlocking.receivedByte( uint8_t byte ) {}
  	default async event void Uart1StreamBlocking.receiveDone( uint8_t* buf, uint16_t len, error_t error ){}
  	
	default async event void Uart1Stream.sendDone(uint8_t* buf, uint16_t len, error_t err) {}
  	default async event void Uart1Stream.receivedByte( uint8_t byte ) {}
  	default async event void Uart1Stream.receiveDone( uint8_t* buf, uint16_t len, error_t error ){}

	task void sendBlockingDoneTask()
	{ 
		signal Uart1StreamBlocking.sendDone(txBuf, txLen, txResult);
	}
	
	task void receiveBlockingDoneTask() 
	{ 
		signal Uart1StreamBlocking.receiveDone(rxBuf,  rxLen, rxResult); 
	}
	
	task void sendDoneTask()
	{
		signal Uart1Stream.sendDone(txBuf, txLen, txResult);
	}
	
	task void receiveDoneTask()
	{
		signal Uart1Stream.receiveDone(rxBuf,  rxLen, rxResult); 
		rxBuf = NULL;
		rxLen = 0;
		rxPos = 0;
		atomic
		{
			rxBusy = FALSE;		
		}
	}

	task void unexpectedByteReceivedTask()
	{
		signal Uart1Stream.receivedByte(rxUnexpectedByte);	
	}

	async command mcu_power_t Uart1PowerOverride.lowestState()
	{
		return ATM128_POWER_IDLE;
	}

	async event void Counter.overflow(){}
}
