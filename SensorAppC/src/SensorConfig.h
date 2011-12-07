//
//
//  SensorConfig.nc
//
//  aa
//
//  Created by Tian Junzhe on 12/5/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//



#ifndef SENSOR_CONFIG_H
#define SENSOR_CONFIG_H


#include "packet_types.h"
#include "PlatformSensorChannel.h"

#define NODE_ID 100					//Only for testing

#define BUFFER_SIZE 5

//TIMER_UNIT	TSecond
#define TIMER_SCALE 1000
#define TIMING_PHASE_SHIFT 0

#define DEFAULT_TIMER_PERIOD	5	//unit: second
#define DEFAULT_TIMER_BOUNDARY	48ul	//unit: day


//#define LED_SENSOR_ENABLE

#define CONSTANT_NODE_ID


#endif /* SENSOR_CONFIG_H */
