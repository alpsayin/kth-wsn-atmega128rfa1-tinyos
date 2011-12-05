

#include "SensorConfig.h"


configuration SensorControlC{
	
	provides {
		
		interface Init;
//		interface Set<status_packet_t>;
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
	
	}
	
	uses {
		
		interface Read<data_packet_t> as ReadAdc;
		interface Queue<data_packet_t> as StoreData;
		interface Notify<status_packet_t>;
		
	}
	
}
implementation{
	
	components SensorControlP;
	components new TimerMilliC() as Timer0;
	
	Init		= SensorControlP;
//	Set			= SensorControlP;
	ReadAdc		= SensorControlP;
	GetStatus	= SensorControlP;
	GetData		= SensorControlP;
	
	StoreData	= SensorControlP;
	Notify		= SensorControlP;
	
	SensorControlP.Timer0 -> Timer0;
	
}