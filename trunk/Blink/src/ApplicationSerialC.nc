configuration ApplicationSerialC
{
	provides interface Init as Uart1Init;
	provides interface UartStream as Uart1Stream;
	provides interface UartByte as Uart1Byte;
	provides interface UartStream as Uart1StreamBlocking;
}
implementation
{
	components ApplicationSerialP, Uart1InterruptsP, MainC, LedsC, McuSleepC, CounterMilli32C;
	
	Uart1Init = ApplicationSerialP.Uart1Init; 
	Uart1Byte = ApplicationSerialP.Uart1Byte;
	Uart1Stream = ApplicationSerialP.Uart1Stream;
	Uart1StreamBlocking = ApplicationSerialP.Uart1StreamBlocking;
	Uart1InterruptsP.Leds -> LedsC;
	ApplicationSerialP.Counter -> CounterMilli32C;
	ApplicationSerialP.Uart1Interrupts -> Uart1InterruptsP;
	ApplicationSerialP.Leds -> LedsC;
	MainC.SoftwareInit -> ApplicationSerialP.Uart1Init;
	McuSleepC.McuPowerOverride -> ApplicationSerialP.Uart1PowerOverride;
}