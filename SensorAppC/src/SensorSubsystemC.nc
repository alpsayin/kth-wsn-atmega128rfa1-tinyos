//
//
//  SensorSubsystemC.nc
//
//  aa
//
//  Created by Tian Junzhe on 12/5/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//

#include "SensorConfig.h"



configuration SensorSubsystemC{
	
	provides {
		
		interface Read<data_packet_t>;
		interface Read<data_packet_t> as ReadOne;
		
	}
	
}

implementation{
	
	components SensorSubsystemP;
	
	components new PlatformSensorC(Sensor_Channel_T) as TempSensor;
	components new PlatformSensorC(Sensor_Channel_6) as vol0;
	components new PlatformSensorC(Sensor_Channel_4) as vol1;
	components new PlatformSensorC(Sensor_Channel_2) as vol2;
	components new PlatformSensorC(Sensor_Channel_3) as vol3;

	Read		= SensorSubsystemP.Read;
	ReadOne		= SensorSubsystemP.ReadOne;
	
	SensorSubsystemP.TempADC -> TempSensor.Read;
	SensorSubsystemP.vol0ADC -> vol0.Read;
	SensorSubsystemP.vol1ADC -> vol1.Read;
	SensorSubsystemP.vol2ADC -> vol2.Read;
	SensorSubsystemP.vol3ADC -> vol3.Read;
	
}