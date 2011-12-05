
#include "SensorConfig.h"

configuration SensorC{

	provides {
	
		interface Set<status_packet_t>;
		interface Get<status_packet_t>;
		interface Read<data_packet_t>;
		interface ReadNow<data_packet_t>;
	
	}
	
	uses {

		interface Notify<uint8_t>;		//uint8_t is just for test, check this later

	}
	
}

implementation{

	components SensorControlC;
	components SensorSubsystemC;
	components new QueueC(data_packet_t, BUFFER_SIZE) as SensorBuffer;
	
	Set		= SensorControlC;
	Get		= SensorControlC;
	Read	= SensorControlC;
	Notify	= SensorControlC;

	ReadNow	= SensorSubsystemC;
		
}