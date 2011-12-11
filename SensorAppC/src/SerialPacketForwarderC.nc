
#include "packet_types.h"

configuration SerialPacketForwarderC
{
	provides
	{
		interface Init as SerialPacketForwarderInit;
		//should be wired to the radiosubsystem interfaces
		interface Notify<command_packet_t> as CommandNotification;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
	}
}
implementation
{
	components SerialPacketForwarderP, PlatformSerialC, LedsC, MainC;
	components new PacketTypesP() as PacketTypesImpl;
	//QUEUE_SIZEs are defined in packet_types.h
	components new QueueC(data_packet_t, QUEUE_SIZE_SERIAL_DATA) as DataQueue;
	components new QueueC(command_packet_t, QUEUE_SIZE_SERIAL_COMMAND) as CommandQueue;
	components new QueueC(status_packet_t, QUEUE_SIZE_SERIAL_STATUS) as StatusQueue;
	
	MainC.SoftwareInit -> SerialPacketForwarderP.SerialPacketForwarderInit;
	
	SerialPacketForwarderP.PacketTypes -> PacketTypesImpl;
	SerialPacketForwarderP.UartControl -> PlatformSerialC;
	SerialPacketForwarderP.UartStream -> PlatformSerialC;
	SerialPacketForwarderP.UartByte -> PlatformSerialC;
	SerialPacketForwarderP.Leds -> LedsC;
	SerialPacketForwarderP.DataQueue -> DataQueue;
	SerialPacketForwarderP.StatusQueue -> StatusQueue;
	SerialPacketForwarderP.CommandQueue -> CommandQueue;
	
	SerialPacketForwarderInit = SerialPacketForwarderP.SerialPacketForwarderInit;
	CommandNotification = SerialPacketForwarderP.CommandNotification;
	ForwardCommand = SerialPacketForwarderP.ForwardCommand;
	ForwardData = SerialPacketForwarderP.ForwardData;
	ForwardStatus = SerialPacketForwarderP.ForwardStatus;
}