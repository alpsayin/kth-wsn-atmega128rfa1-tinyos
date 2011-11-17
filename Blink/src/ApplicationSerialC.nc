configuration ApplicationSerialC
{
	provides interface Init as Uart1Init;
	provides interface UartStream as Uart1Stream;
	provides interface UartByte as Uart1Byte;
}
implementation
{
	components ApplicationSerialP, Uart1InterruptsP, MainC, LedsC, McuSleepC;
	
	Uart1Init = ApplicationSerialP.Uart1Init; 
	Uart1Byte = ApplicationSerialP.Uart1Byte;
	Uart1Stream = ApplicationSerialP.Uart1Stream;
	Uart1InterruptsP.Leds -> LedsC;
	ApplicationSerialP.Uart1Interrupts -> Uart1InterruptsP;
	ApplicationSerialP.Leds -> LedsC;
	MainC.SoftwareInit -> ApplicationSerialP.Uart1Init;
	McuSleepC.McuPowerOverride -> ApplicationSerialP.Uart1PowerOverride;
}