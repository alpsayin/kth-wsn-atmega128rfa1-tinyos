
#include "RadioConfig.h"

configuration RadioSubsystemC{
	
	uses
	{
#ifdef LED_RADIO_ENABLE	
		interface Leds;
#endif

		interface Init;
//		
//		interface Timer<TMilli> as MilliTimer;
//		interface Timer<TMilli> as TemperatureTimer;
//		interface Timer<TMilli> as RegisterPrinter;
//		
		interface SplitControl as AMControl;
		interface Packet;
	
//		interface UartStream;
//		interface UartByte;
		
		interface StdControl as DisseminationControl;
		interface DisseminationValue<kth_wsn_command_t> as CommandValue;
		interface DisseminationUpdate<kth_wsn_command_t> as CommandUpdate;
		
		interface StdControl as RoutingControl;
		interface Send as CollectionSend;
		interface Receive as CollectionReceive;
		interface RootControl as RootControl;
		interface Read<uint16_t> as TempRead;
	
	}	
	
}
implementation{
	
//	components MainC, RadioCountToLedsC as App, LedsC;
//  App.Boot -> MainC.Boot;
//  App.Leds -> LedsC;
//  
//  components new AMSenderC(AM_RADIO_COUNT_MSG);
//  App.AMSend -> AMSenderC;
//  App.Packet -> AMSenderC;
//  
//  components new AMReceiverC(AM_RADIO_COUNT_MSG);
//  App.Receive -> AMReceiverC;
//
//  components new TimerMilliC();
//  App.MilliTimer -> TimerMilliC;
//  
//  components new TimerMilliC() as RegisterPrinterTimer;
//  App.RegisterPrinter -> RegisterPrinterTimer;
//  
//  components new TimerMilliC() as TemperatureTimer;
//  App.TemperatureTimer -> TemperatureTimer;
//  
//  components ActiveMessageC;
//  App.AMControl -> ActiveMessageC;
//  App.AMPacket -> ActiveMessageC.AMPacket;
//  
//  components PlatformSerialC;
//  App.UartStream -> PlatformSerialC;
//  App.UartByte -> PlatformSerialC;
//  
//  components new QueueC(kth_wsn_command_t, 10);
//  
//  components DisseminationC;
//  App.DisseminationControl -> DisseminationC;
//  
//  components new DisseminatorC(kth_wsn_command_t, 0xaa) as DissCommand;
//  App.CommandValue -> DissCommand;
//  App.CommandUpdate -> DissCommand;
//  
//  components CollectionC as Collector;
//  App.RoutingControl -> Collector;
//  App.RootControl -> Collector;
//  App.CollectionReceive -> Collector.Receive[0xbb];
//  
//  components new CollectionSenderC(0xbb);
//  App.CollectionSend -> CollectionSenderC;
//  
//  components new PlatformSensorC(Sensor_Channel_T) as TempSensor;
//  App.TempRead -> TempSensor;
	
}