//
//
//  SensorC.nc
//
//  aa
//
//  Created by Tian Junzhe on 12/5/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//
//	Top-level component for sensors, if any changes of the sensors, modify
//		SensorSubsystemC.nc
//		SensorSubsystemP.nc
//	other changes in
//		SensorConfig.h
//		packet_types.h
//		
//




#include "SensorConfig.h"

configuration SensorC{

	provides {

		interface Init;
		
		interface Get<status_packet_t> as GetStatus;
		interface ArrayPipe<data_packet_t> as GetData;
		interface Read<data_packet_t> as GetDataOne;
	
	}
	
	uses {
		
		interface Set<uint8_t> as SPEnable;
		
		interface Notify<status_packet_t>;

	}
	
}

implementation{

	components SensorControlC;
	components SensorSubsystemC;
	components new QueueC(data_packet_t, SENSOR_BUFFER_SIZE) as SensorBuffer;
	
#ifdef LED_SENSOR_ENABLE
	components LedsC;
	SensorControlC.Leds -> LedsC.Leds;
#endif
	
	Init		= SensorControlC.Init;
	SPEnable	= SensorControlC.SPEnable;
	GetStatus	= SensorControlC.GetStatus;
	GetData		= SensorControlC.GetData;
	Notify		= SensorControlC.Notify;
	
	GetDataOne	= SensorSubsystemC.ReadOne;
	
	SensorControlC.ReadAdc		-> SensorSubsystemC.Read;
	
	SensorControlC.StoreData	-> SensorBuffer.Queue;	
	
}