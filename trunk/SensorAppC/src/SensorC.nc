
#include "SensorConfig.h"

configuration SensorC{

	provides {
	
//		interface Set<status_packet_t>;
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
		interface ReadNow<data_packet_t> as GetDataNow;
	
	}
	
	uses {

		interface Notify<status_packet_t>;		//uint8_t is just for test, check this later

	}
	
}

implementation{

	components SensorControlC;
	components SensorSubsystemC;
	components new QueueC(data_packet_t, BUFFER_SIZE) as SensorBuffer;
	
//	Set			= SensorControlC;
	GetStatus	= SensorControlC;
	GetData		= SensorControlC;
	Notify		= SensorControlC;

	GetDataNow	= SensorSubsystemC;
		
}