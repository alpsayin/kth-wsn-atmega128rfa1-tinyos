configuration Atm128Rfa1SerialC
{
	provides interface Init as Uart1Init;
	provides interface UartStream as Uart1Stream;
	provides interface UartByte as Uart1Byte;
	provides interface UartStream as Uart1StreamBlocking;
}
implementation
{
	components Atm128Rfa1SerialP, Atm128Rfa1Uart1InterruptsP, McuInitC, LedsC, McuSleepC, CounterMilli32C;
	
	Uart1Init = Atm128Rfa1SerialP.Uart1Init; 
	Uart1Byte = Atm128Rfa1SerialP.Uart1Byte;
	Uart1Stream = Atm128Rfa1SerialP.Uart1Stream;
	Uart1StreamBlocking = Atm128Rfa1SerialP.Uart1StreamBlocking;
	Atm128Rfa1Uart1InterruptsP.Leds -> LedsC;
	Atm128Rfa1SerialP.Counter -> CounterMilli32C;
	Atm128Rfa1SerialP.Uart1Interrupts -> Atm128Rfa1Uart1InterruptsP;
	Atm128Rfa1SerialP.Leds -> LedsC;
	McuSleepC.McuPowerOverride -> Atm128Rfa1SerialP.Uart1PowerOverride;
}
