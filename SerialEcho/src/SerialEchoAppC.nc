configuration SerialEchoAppC {}
implementation
{
	components MainC, SerialEchoC, PlatformSerialC, LedsC;
	
	components new TimerMilliC() as BufferTimer;
	components new TimerMilliC() as LedTimer;
	SerialEchoC.Timer1 -> LedTimer;
	SerialEchoC.Timer0 -> BufferTimer;
	SerialEchoC.Boot -> MainC.Boot;
	SerialEchoC.UartStream -> PlatformSerialC;
	SerialEchoC.UartByte -> PlatformSerialC;
	SerialEchoC.Leds -> LedsC;
}