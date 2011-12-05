
#include "SensorConfig.h"



configuration SensorSubsystemC{
	
	provides {
		
		interface Read<data_packet_t> as GetData;
		interface ReadNow<data_packet_t>;
		
	}
}

implementation{
	
	components SensorSubsystemP;
	
	components new PlatformSensorC(Sensor_Channel_T) as TempSensor;
	components new PlatformSensorC(Sensor_Channel_0) as Vol0;
	components new PlatformSensorC(Sensor_Channel_1) as Vol1;
	components new PlatformSensorC(Sensor_Channel_2) as Vol2;
	components new PlatformSensorC(Sensor_Channel_3) as Vol3;

	GetData		= SensorSubsystemP;
	ReadNow		= SensorSubsystemP;
	
	
	
}