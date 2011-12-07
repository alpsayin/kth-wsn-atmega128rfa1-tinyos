
#include "ControllerConfig.h"

configuration ControllerC{

	provides {
		
		interface Init;
		interface Notify<status_packet_t>;
			
	}
	
	uses {
		
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
		interface Read<data_packet_t> as GetDataOne;
		
	}
	
	uses {
		
		interface Notify<command_packet_t> as CommandNotification;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
		
	}

}
implementation{
	
	components ControllerP;
	
	Init		= ControllerP.Init;
	GetStatus	= ControllerP.GetStatus;
	GetData		= ControllerP.GetData;
	GetDataOne	= ControllerP.GetDataOne;
	Notify		= ControllerP.Notify;

#ifdef DEBUG_MODE
	components PlatformSerialC;
	ControllerP.UartControl -> PlatformSerialC.UartControl;
	ControllerP.UartStream	-> PlatformSerialC.UartStream;
	ControllerP.UartByte	-> PlatformSerialC.UartByte;
#endif
	
	components RadioSubsystemC;


}