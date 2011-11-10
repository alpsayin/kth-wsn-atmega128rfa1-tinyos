configuration ApplicationSerialC
{
	provides interface Init as Uart1Init;
	provides interface UartStream as Uart1Stream;
	provides interface UartByte as Uart1Byte;
}
implementation
{
	components ApplicationSerialP, Uart1InterruptsP;
	
	Uart1Init = ApplicationSerialP.Uart1Init; 
	Uart1Byte = ApplicationSerialP.Uart1Byte;
	Uart1Stream = ApplicationSerialP.Uart1Stream;
	ApplicationSerialP.Uart1Interrupts -> Uart1InterruptsP;
}