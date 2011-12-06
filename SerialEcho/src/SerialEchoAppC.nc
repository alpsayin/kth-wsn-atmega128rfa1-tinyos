configuration SerialEchoAppC {}
implementation
{
	components MainC, SerialEchoC, PlatformSerialC, LedsC;
	components DummyNotificationReceiverP;
	components new TimerMilliC() as BufferTimer;
	components new TimerMilliC() as LedTimer;
	components new PacketTypesP() as PacketTypesImpl;
	components new PacketTypesP() as PacketTypesDummy;
	
	SerialEchoC.PacketTypes -> PacketTypesImpl;
	SerialEchoC.Timer1 -> LedTimer;
	SerialEchoC.Timer0 -> BufferTimer;
	SerialEchoC.Boot -> MainC.Boot;
	SerialEchoC.UartStream -> PlatformSerialC;
	SerialEchoC.UartByte -> PlatformSerialC;
	SerialEchoC.Leds -> LedsC;
	
	DummyNotificationReceiverP.CommandNotification -> SerialEchoC;
	DummyNotificationReceiverP.UartByte -> PlatformSerialC;
	DummyNotificationReceiverP.PacketTypes -> PacketTypesDummy;
}