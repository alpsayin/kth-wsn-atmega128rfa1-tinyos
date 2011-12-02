// $Id: RadioCountToLedsAppC.nc,v 1.5 2010-06-29 22:07:17 scipio Exp $

 
#include "RadioCountToLeds.h"

/**
 * Configuration for the RadioCountToLeds application. RadioCountToLeds 
 * maintains a 4Hz counter, broadcasting its value in an AM packet 
 * every time it gets updated. A RadioCountToLeds node that hears a counter 
 * displays the bottom three bits on its LEDs. This application is a useful 
 * test to show that basic AM communication and timers work.
 *
 * @author Philip Levis
 * @date   June 6 2005
 */
 
#include "PlatformSensorChannel.h"

configuration RadioCountToLedsAppC {}
implementation {
  components MainC, RadioCountToLedsC as App, LedsC;
  App.Boot -> MainC.Boot;
  App.Leds -> LedsC;
  
  components new AMSenderC(AM_RADIO_COUNT_MSG);
  App.AMSend -> AMSenderC;
  App.Packet -> AMSenderC;
  
  components new AMReceiverC(AM_RADIO_COUNT_MSG);
  App.Receive -> AMReceiverC;

  components new TimerMilliC();
  App.MilliTimer -> TimerMilliC;
  
  components new TimerMilliC() as TemperatureTimer;
  App.TemperatureTimer -> TemperatureTimer;
  
  components ActiveMessageC;
  App.AMControl -> ActiveMessageC;
  App.AMPacket -> ActiveMessageC.AMPacket;
  
  components PlatformSerialC;
  App.UartStream -> PlatformSerialC;
  App.UartByte -> PlatformSerialC;
  
  components DisseminationC;
  App.DisseminationControl -> DisseminationC;
  
  components new DisseminatorC(kth_wsn_command_t, 0xaa) as DissCommand;
  App.CommandValue -> DissCommand;
  App.CommandUpdate -> DissCommand;
  
  components CollectionC as Collector;
  App.RoutingControl -> Collector;
  App.RootControl -> Collector;
  App.CollectionReceive -> Collector.Receive[0xbb];
  
  components new CollectionSenderC(0xbb);
  App.CollectionSend -> CollectionSenderC;
  
  components new PlatformSensorC(Sensor_Channel_T) as TempSensor;
  App.TempRead -> TempSensor;
}


