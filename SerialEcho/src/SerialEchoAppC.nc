configuration SerialEchoAppC {}
implementation
{
	components MainC, SerialEchoC, PlatformSerialC, LedsC;
	components new TimerMilliC() as Timer0;
	components new TimerMilliC() as Timer1;
	components new PacketTypesP() as PacketTypesImpl;
	components new QueueC(data_packet_t, 255) as DataQueue;
	components new QueueC(command_packet_t, 32) as CommandQueue;
	components new QueueC(status_packet_t, 32) as StatusQueue;
	
	SerialEchoC.PacketTypes -> PacketTypesImpl;
	SerialEchoC.Timer0 -> Timer0;
	SerialEchoC.Timer1 -> Timer1;
	SerialEchoC.Boot -> MainC.Boot;
	SerialEchoC.UartStream -> PlatformSerialC;
	SerialEchoC.UartByte -> PlatformSerialC;
	SerialEchoC.Leds -> LedsC;
	SerialEchoC.DataQueue -> DataQueue;
	SerialEchoC.StatusQueue -> StatusQueue;
	SerialEchoC.CommandQueue -> CommandQueue;
	
	components DummyNotificationReceiverP;
	components new PacketTypesP() as PacketTypesDummy;
	components new TimerMilliC() as Timer2;
	components new TimerMilliC() as Timer3;
	DummyNotificationReceiverP.CommandNotification -> SerialEchoC;
	DummyNotificationReceiverP.UartByte -> PlatformSerialC;
	DummyNotificationReceiverP.PacketTypes -> PacketTypesDummy;
	DummyNotificationReceiverP.Timer0 -> Timer2;
	DummyNotificationReceiverP.Timer1 -> Timer3;
	DummyNotificationReceiverP.Boot -> MainC.Boot;
	DummyNotificationReceiverP.Leds -> LedsC;
	
	SerialEchoC.CommandNotification <- DummyNotificationReceiverP.CommandNotification;
	SerialEchoC.ForwardCommand <- DummyNotificationReceiverP.ForwardCommand;
	SerialEchoC.ForwardData <- DummyNotificationReceiverP.ForwardData;
	SerialEchoC.ForwardStatus <- DummyNotificationReceiverP.ForwardStatus;
}