
#include "ControllerConfig.h"

configuration ControllerC{

	provides {
		
		interface Init;
		
		interface Set<uint8_t> as SPEnable;
		interface Notify<status_packet_t>;
			
	}
	
	uses {
		
		interface Init as InitSensorC;
		
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
		interface Read<data_packet_t> as GetDataOne;
		
	}
	
//-----------------------connect to Serial Port------------------------------
	uses {
		
		interface Notify<command_packet_t> as CommandNotification;
		interface Set<command_packet_t> as ForwardCommand;
		interface Set<data_packet_t> as ForwardData;
		interface Set<status_packet_t> as ForwardStatus;
		
	}

}
implementation{
	
	components ControllerP;
	Init		= ControllerP.Init;
	InitSensorC = ControllerP.InitSensorC;
	
	SPEnable	= ControllerP.SPEnable;
	GetStatus	= ControllerP.GetStatus;
	GetData		= ControllerP.GetData;
	GetDataOne	= ControllerP.GetDataOne;
	Notify		= ControllerP.Notify;

//	CommandNotification	= ControllerP;
//	ForwardStatus		= ControllerP;
//	ForwardData			= ControllerP;
//	ForwardCommand		= ControllerP;


#ifdef DEBUG_MODE
	components PlatformSerialC;
	ControllerP.UartControl -> PlatformSerialC.UartControl;
	ControllerP.UartByte	-> PlatformSerialC.UartByte;
	ControllerP.UartStream	-> PlatformSerialC.UartStream;
#endif
	
	components RadioSubsystemC;

	ForwardCommand			= RadioSubsystemC.ForwardCommand;
	ForwardData				= RadioSubsystemC.ForwardData;
	ForwardStatus			= RadioSubsystemC.ForwardStatus;
	CommandNotification		= RadioSubsystemC.NotifySerialCommand;
	







	components IOInterfaceC;
	ControllerP.CheckRoot			-> IOInterfaceC.CheckRoot;
	ControllerP.LightSensorEnable	-> IOInterfaceC.LightSensorEnable;
	ControllerP.HumiditySensorEnable-> IOInterfaceC.HumiditySensorEnable;
	ControllerP.PressureSensorEnable-> IOInterfaceC.PressureSensorEnable;
	ControllerP.VoltageSensorEnable -> IOInterfaceC.VoltageSensorEnable;

}