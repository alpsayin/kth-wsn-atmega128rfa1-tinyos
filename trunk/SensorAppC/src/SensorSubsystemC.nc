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
	
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_1) as Data1;
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_2) as Data2;
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_3) as Data3;
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_4) as Data4;
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_5) as Data5;
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_6) as Data6;
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_7) as Data7;
	components new PlatformSensorC(PRE_DEFINE_CHANNEL_8) as Data8;

	Read		= SensorSubsystemP.Read;
	ReadOne		= SensorSubsystemP.ReadOne;
	
	SensorSubsystemP.Data1ADC -> Data1.Read;
	SensorSubsystemP.Data2ADC -> Data2.Read;
	SensorSubsystemP.Data3ADC -> Data3.Read;
	SensorSubsystemP.Data4ADC -> Data4.Read;
	SensorSubsystemP.Data5ADC -> Data5.Read;
	SensorSubsystemP.Data6ADC -> Data6.Read;
	SensorSubsystemP.Data7ADC -> Data7.Read;
	SensorSubsystemP.Data8ADC -> Data8.Read;
	
}