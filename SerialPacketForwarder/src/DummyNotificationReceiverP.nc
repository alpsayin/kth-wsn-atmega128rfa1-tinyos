
#include "packet_types.h"

module DummyNotificationReceiverP
{
	uses 
	{
		interface UartByte;
		interface PacketTypes;
		interface Boot;
		interface Leds;
		
		interface Notify<command_packet_t> as CommandNotification;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
		
		interface Timer<TMilli> as Timer0;
		interface Timer<TMilli> as Timer1;
		
	}
}
implementation
{
	norace status_packet_t statusPacket;
	norace data_packet_t dataPacket;
	norace bool commandTaken=FALSE;
	norace command_packet_t comPack;
	event void Boot.booted()
	{
		statusPacket.node_id = 0x0002;
		statusPacket.burstEnable = 1;
		statusPacket.burstInterval = 16;
		statusPacket.historyEnable = 1;
		statusPacket.intervalType = INTERVAL_TYPE_DAYS;
		
		dataPacket.source = 0x0002;
		dataPacket.data1 = 0;
		dataPacket.data2 = 0;
		dataPacket.data3 = 0;
		dataPacket.data4 = 0;
		dataPacket.data5 = 0;
		dataPacket.seqNo = 0;
		call CommandNotification.enable();
		
		call Timer0.startPeriodic(1000);
		call Timer1.startPeriodic(5000);
	}
	event void CommandNotification.notify(command_packet_t val)
	{
		comPack = val;
		commandTaken = TRUE;
		call Leds.led1Toggle();
	}

	event void Timer0.fired()
	{
		dataPacket.data1++;
		dataPacket.data2++;
		dataPacket.data3++;
		dataPacket.data4++;
		dataPacket.data5++;
		dataPacket.seqNo++;
		dataPacket.source = 0x0002;
		call ForwardData.setNow(dataPacket);
	}

	event void Timer1.fired()
	{
		statusPacket.historyEnable = 1;
		statusPacket.burstEnable = 1;
		statusPacket.burstInterval = 16;
		statusPacket.intervalType = INTERVAL_TYPE_DAYS;
		statusPacket.node_id = 0x0002;
		while(call ForwardStatus.setNow(statusPacket)!=SUCCESS);
		if(commandTaken)
		{
			while(call ForwardCommand.setNow(comPack)!=SUCCESS);
			commandTaken = FALSE;	
		}
	}

}