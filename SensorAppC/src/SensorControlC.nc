

#include "SensorConfig.h"


configuration SensorControlC{
	
	provides {
		
		interface Init;
		interface Set<status_packet_t>;
		interface Get<status_packet_t>;
		interface Read<data_packet_t>;
	
	}
	
	uses {
		
		interface Read<data_packet_t> as GetData;
		interface Queue<data_packet_t> as StoreData;

		interface Notify<uint8_t>;		//uint8_t is just for test, check this later
		
	}
	
}
implementation{
	
	components SensorControlP;
	components new TimerMilliC() as Timer0;
	
	Init	= SensorControlP;
	Set		= SensorControlP;
	Get		= SensorControlP;
	Read	= SensorControlP;
	GetData	= SensorControlP;
	
	StoreData	= SensorControlP;
	Notify		= SensorControlP;
	
	SensorControlP.Timer0 -> Timer0;
	
}