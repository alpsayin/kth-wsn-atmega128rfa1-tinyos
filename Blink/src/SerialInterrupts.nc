

interface SerialInterrupts
{
	async command void enableTxInterrupt();
	async command void enableRxInterrupt();
	
	async command void disableTxInterrupt();
	async command void disableRxInterrupt();
	
	async command void clearTxInterrupt();
	async command void clearRxInterrupt();
	
	async command bool isRxInterruptPending();
	async command bool isTxInterruptPending();
	
	async command void setSendData();
	
	async event void rxInterruptHandler(uint8_t byte);
	async event void txInterruptHandler();
}