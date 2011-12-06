//
//
//  SensorControlC.nc
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


configuration SensorControlC{
	
	provides {
		
		interface Init;
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
	
	}
	
	uses {
		
		interface Read<data_packet_t> as ReadAdc;
		interface Queue<data_packet_t> as StoreData;
		interface Notify<status_packet_t>;
#ifdef LED_SENSOR_ENABLE
		interface Leds;
#endif
	}
	
}
implementation{
	
	components SensorControlP;
	components new TimerMilliC() as Timer0;
	
	Init		= SensorControlP;
	ReadAdc		= SensorControlP;
	GetStatus	= SensorControlP;
	GetData		= SensorControlP;
	
	StoreData	= SensorControlP;
	Notify		= SensorControlP;
	
	SensorControlP.Timer0 -> Timer0;
	
#ifdef LED_SENSOR_ENABLE
	Leds = SensorControlP.Leds;
#endif
}