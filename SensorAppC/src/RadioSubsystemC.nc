
#include "RadioConfig.h"
#include "packet_types.h"

configuration RadioSubsystemC
{
	provides 
	{
		interface RootControl;
		interface SetNow<data_packet_t> as SetRadioData;
		interface SetNow<command_packet_t> as SetRadioCommand;
		interface SetNow<status_packet_t> as SetRadioStatus;
		interface Notify<command_packet_t> as NotifyRadioCommand;
	}
	uses
	{
		interface Set<data_packet_t> as ForwardData;
		interface Set<status_packet_t> as ForwardStatus;
		interface Set<command_packet_t> as ForwardCommand;
	}
}
implementation
{
	components RadioSubsystemP;
	
	SetRadioData = RadioSubsystemP.SetRadioData;
	SetRadioStatus = RadioSubsystemP.SetRadioStatus;
	SetRadioCommand = RadioSubsystemP.SetRadioCommand;
	NotifyRadioCommand = RadioSubsystemP.NotifyRadioCommand;
	
	ForwardData = RadioSubsystemP.ForwardData;
	ForwardStatus = RadioSubsystemP.ForwardStatus;
	ForwardCommand = RadioSubsystemP.ForwardCommand;
	
	//components MainC;
	//MainC.SoftwareInit -> RadioSubsystemP.RadioSubsystemInit;
	
	components LedsC;
  	RadioSubsystemP.Leds -> LedsC;

	components DisseminationC;
	RadioSubsystemP.DisseminationControl -> DisseminationC;
	  
	components new DisseminatorC(command_packet_t, 0xaa) as DissCommand;
	RadioSubsystemP.CommandValue -> DissCommand;
	RadioSubsystemP.CommandUpdate -> DissCommand;
	  
	components CollectionC as Collector;
	RadioSubsystemP.RoutingControl -> Collector;
	RootControl = Collector.RootControl;
	RadioSubsystemP.DataCollectionReceive -> Collector.Receive[0xbb];
	RadioSubsystemP.StatusCollectionReceive -> Collector.Receive[0xcc];
	RadioSubsystemP.CommandCollectionReceive -> Collector.Receive[0xdd];
	RadioSubsystemP.HistoryCollectionReceive -> Collector.Receive[0xee];
  
	components new CollectionSenderC(0xbb) as DataCollectionSender;
	RadioSubsystemP.DataCollectionSend -> DataCollectionSender;
	
	components new CollectionSenderC(0xcc) as StatusCollectionSender;
	RadioSubsystemP.StatusCollectionSend -> StatusCollectionSender;
	
	components new CollectionSenderC(0xdd) as CommandCollectionSender;
	RadioSubsystemP.CommandCollectionSend -> CommandCollectionSender;
	
	components new CollectionSenderC(0xee) as HistoryCollectionSender;
	RadioSubsystemP.HistoryCollectionSend -> HistoryCollectionSender;
	
}