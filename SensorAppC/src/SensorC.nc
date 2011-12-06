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
		interface Get<data_packet_t> as GetData;
		interface ReadNow<data_packet_t> as GetDataNow;
	
	}
	
	uses {
		
		interface Notify<status_packet_t>;

		
		interface Leds;

	}
	
}

implementation{

	components SensorControlC;
	components SensorSubsystemC;
	components new QueueC(data_packet_t, BUFFER_SIZE) as SensorBuffer;
	
	Init		= SensorControlC.Init;
	GetStatus	= SensorControlC.GetStatus;
	GetData		= SensorControlC.GetData;
	Notify		= SensorControlC.Notify;
	GetDataNow	= SensorSubsystemC.ReadNow;
	
	SensorControlC.ReadAdc		-> SensorSubsystemC.Read;
	SensorControlC.StoreData	-> SensorBuffer.Queue;	
	
	Leds = SensorControlC.Leds;
}