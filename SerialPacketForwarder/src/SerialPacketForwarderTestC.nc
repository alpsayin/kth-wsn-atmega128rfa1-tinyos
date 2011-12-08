
#include "packet_types.h"

configuration SerialPacketForwarderTestC {}
implementation
{
	components DummyNotificationReceiverP;
	components PlatformLedsC;	
	
	components MainC;
	DummyNotificationReceiverP.Boot -> MainC;
	
	components LedsC;
	DummyNotificationReceiverP.Leds -> LedsC;
	
	components PlatformSerialC;
	DummyNotificationReceiverP.UartByte -> PlatformSerialC;
	
	components SerialPacketForwarderC;
	DummyNotificationReceiverP.CommandNotification -> SerialPacketForwarderC.CommandNotification;
	DummyNotificationReceiverP.ForwardCommand -> SerialPacketForwarderC.ForwardCommand;
	DummyNotificationReceiverP.ForwardData -> SerialPacketForwarderC.ForwardData;
	DummyNotificationReceiverP.ForwardStatus -> SerialPacketForwarderC.ForwardStatus;
	
	components new PacketTypesP() as PacketTypesDummy;
	DummyNotificationReceiverP.PacketTypes -> PacketTypesDummy;
	
	components new TimerMilliC() as Timer0;
	DummyNotificationReceiverP.Timer0 -> Timer0;
	
	components new TimerMilliC() as Timer1;
	DummyNotificationReceiverP.Timer1 -> Timer1;
}