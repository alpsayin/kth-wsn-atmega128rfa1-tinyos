
#include "SensorConfig.h"



configuration SensorSubsystemC{
	
	provides {
		
		interface Read<data_packet_t>;
		interface ReadNow<data_packet_t>;
		
	}
	
}

implementation{
	
	components SensorSubsystemP;
	
	components new PlatformSensorC(Sensor_Channel_T) as TempSensor;
	components new PlatformSensorC(Sensor_Channel_0) as vol0;
	components new PlatformSensorC(Sensor_Channel_1) as vol1;
	components new PlatformSensorC(Sensor_Channel_2) as vol2;
	components new PlatformSensorC(Sensor_Channel_3) as vol3;

	Read		= SensorSubsystemP;
	ReadNow		= SensorSubsystemP;
	
	SensorSubsystemP.TempADC -> TempSensor.Read;
	SensorSubsystemP.vol0ADC -> vol0.Read;
	SensorSubsystemP.vol1ADC -> vol1.Read;
	SensorSubsystemP.vol2ADC -> vol2.Read;
	SensorSubsystemP.vol3ADC -> vol3.Read;
	
}