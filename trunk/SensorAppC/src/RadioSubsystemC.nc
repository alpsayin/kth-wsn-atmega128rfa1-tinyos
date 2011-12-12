
#include "packet_types.h"

configuration RadioSubsystemC
{
	provides 
	{
		//these interfaces should be used by Controller to send packets/receive commands
		//if a root is going to be set, it must be set with RootControl before Init
		interface RootControl as RadioSubsystemRootControl;
		interface Init as RadioSubsystemInit;
		//the length provided to the functions of ArrayPipe should be array lengths, not byte lengths
		interface ArrayPipe<history_packet_t> as SetRadioHistory;
		interface SetNow<data_packet_t> as SetRadioData;
		interface SetNow<command_packet_t> as SetRadioCommand;
		interface SetNow<status_packet_t> as SetRadioStatus;
		interface Notify<command_packet_t> as NotifyRadioCommand;
	}
	uses
	{
		//these interfaces should be wired to SerialPacketForwarderC
		//they shouldn't be used by controller
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface Notify<command_packet_t> as NotifySerialCommand;
	}
}
implementation
{
	components RadioSubsystemP;
	
	RadioSubsystemInit = RadioSubsystemP.RadioSubsystemInit;
	SetRadioHistory = RadioSubsystemP.SetRadioHistory;
	SetRadioData = RadioSubsystemP.SetRadioData;
	SetRadioStatus = RadioSubsystemP.SetRadioStatus;
	SetRadioCommand = RadioSubsystemP.SetRadioCommand;
	NotifyRadioCommand = RadioSubsystemP.NotifyRadioCommand;
	
	ForwardData = RadioSubsystemP.ForwardData;
	ForwardStatus = RadioSubsystemP.ForwardStatus;
	ForwardCommand = RadioSubsystemP.ForwardCommand;
	NotifySerialCommand = RadioSubsystemP.NotifySerialCommand;
	
	// these might be uncommented to automatic initialization of RadioSubsystem
	// but we need to set the root first
	//components MainC;
	//MainC.SoftwareInit -> RadioSubsystemP.RadioSubsystemInit;
	
	components ActiveMessageC;
	RadioSubsystemP.AMControl -> ActiveMessageC;
	
	components LedsC;
  	RadioSubsystemP.Leds -> LedsC;
  	
  	components new PacketTypesP();
  	RadioSubsystemP.PacketTypes -> PacketTypesP;

	components DisseminationC;
	RadioSubsystemP.DisseminationControl -> DisseminationC;
	
	//all disseminators and collections must have a unique key
	//these values are hardwired here
	components new DisseminatorC(command_packet_t, 0xaa) as DissCommand;
	RadioSubsystemP.CommandValue -> DissCommand;
	RadioSubsystemP.CommandUpdate -> DissCommand;
	  
	components CollectionC as Collector;
	RadioSubsystemP.RoutingControl -> Collector;
	RadioSubsystemRootControl = Collector.RootControl;
	RadioSubsystemP.DataCollectionReceive -> Collector.Receive[0xbb];
	RadioSubsystemP.StatusCollectionReceive -> Collector.Receive[0xcc];
	RadioSubsystemP.CommandCollectionReceive -> Collector.Receive[0xdd];
	RadioSubsystemP.HistoryCollectionReceive -> Collector.Receive[0xee];
  
  	// the keys to senders and receivers must be respectively same
	components new CollectionSenderC(0xbb) as DataCollectionSender;
	RadioSubsystemP.DataCollectionSend -> DataCollectionSender;
	
	components new CollectionSenderC(0xcc) as StatusCollectionSender;
	RadioSubsystemP.StatusCollectionSend -> StatusCollectionSender;
	
	components new CollectionSenderC(0xdd) as CommandCollectionSender;
	RadioSubsystemP.CommandCollectionSend -> CommandCollectionSender;
	
	components new CollectionSenderC(0xee) as HistoryCollectionSender;
	RadioSubsystemP.HistoryCollectionSend -> HistoryCollectionSender;
	
}