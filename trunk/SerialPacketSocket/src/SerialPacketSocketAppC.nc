configuration SerialPacketSocketAppC {}
implementation
{
	components MainC, SerialPacketSocketC, PlatformSerialC, LedsC;
	components new PacketTypesP() as PacketTypesImpl;
	components new QueueC(data_packet_t, 255) as DataQueue;
	components new QueueC(command_packet_t, 32) as CommandQueue;
	components new QueueC(status_packet_t, 32) as StatusQueue;
	
	SerialPacketSocketC.PacketTypes -> PacketTypesImpl;
	SerialPacketSocketC.Boot -> MainC.Boot;
	SerialPacketSocketC.UartControl -> PlatformSerialC;
	SerialPacketSocketC.UartStream -> PlatformSerialC;
	SerialPacketSocketC.UartByte -> PlatformSerialC;
	SerialPacketSocketC.Leds -> LedsC;
	SerialPacketSocketC.DataQueue -> DataQueue;
	SerialPacketSocketC.StatusQueue -> StatusQueue;
	SerialPacketSocketC.CommandQueue -> CommandQueue;
	
	components DummyNotificationReceiverP;
	components new PacketTypesP() as PacketTypesDummy;
	components new TimerMilliC() as Timer0;
	components new TimerMilliC() as Timer1;
	DummyNotificationReceiverP.CommandNotification -> SerialPacketSocketC;
	DummyNotificationReceiverP.UartByte -> PlatformSerialC;
	DummyNotificationReceiverP.PacketTypes -> PacketTypesDummy;
	DummyNotificationReceiverP.Timer0 -> Timer0;
	DummyNotificationReceiverP.Timer1 -> Timer1;
	DummyNotificationReceiverP.Boot -> MainC.Boot;
	DummyNotificationReceiverP.Leds -> LedsC;
	
	SerialPacketSocketC.CommandNotification <- DummyNotificationReceiverP.CommandNotification;
	SerialPacketSocketC.ForwardCommand <- DummyNotificationReceiverP.ForwardCommand;
	SerialPacketSocketC.ForwardData <- DummyNotificationReceiverP.ForwardData;
	SerialPacketSocketC.ForwardStatus <- DummyNotificationReceiverP.ForwardStatus;
}