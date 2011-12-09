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


#define LED_SENSOR_ENABLE

#define PRE_DEFINE_CHANNEL_1 Sensor_Channel_T	//Temperature
#define PRE_DEFINE_CHANNEL_2 Sensor_Channel_T	//
#define PRE_DEFINE_CHANNEL_3 Sensor_Channel_4	//Humidity
#define PRE_DEFINE_CHANNEL_4 Sensor_Channel_6	//Light
#define PRE_DEFINE_CHANNEL_5 Sensor_Channel_T	//
#define PRE_DEFINE_CHANNEL_6 Sensor_Channel_T	//Reserved
#define PRE_DEFINE_CHANNEL_7 Sensor_Channel_T	//Reserved
#define PRE_DEFINE_CHANNEL_8 Sensor_Channel_T	//Reserved


#define CHANNEL_1_EN 
//#define CHANNEL_2_EN
#define CHANNEL_3_EN
#define CHANNEL_4_EN
//#define CHANNEL_5_EN
//#define CHANNEL_6_EN
//#define CHANNEL_7_EN
//#define CHANNEL_8_EN



#endif /* SENSOR_CONFIG_H */
