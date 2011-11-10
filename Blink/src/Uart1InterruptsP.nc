module Uart1InterruptsP
{
	provides interface SerialInterrupts as Uart1Interrupts;
}
implementation
{
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
	  
	AVR_ATOMIC_HANDLER(SIG_USART1_RECV) 
	{
		if (READ_BIT(UCSR1A, RXC1)) 
		{
			signal Uart1Interrupts.rxInterruptHandler(UDR1);
    	}
  	}
  
  	AVR_NONATOMIC_HANDLER(SIG_USART1_TRANS) 
  	{
  		signal Uart1Interrupts.txInterruptHandler();
  	}
}