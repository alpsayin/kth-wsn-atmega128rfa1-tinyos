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

#ifndef NODE_ID
#define NODE_ID 100
#endif


//TIMER_UNIT	TSecond
#define TIMER_SCALE 1000
#define TIMING_PHASE_SHIFT 0

#define DEFAULT_TIMER_PERIOD	5	//unit: second
#define DEFAULT_TIMER_BOUNDARY	48ul	//unit: day


//#define LED_SENSOR_ENABLE

#define PRE_DEFINE_CHANNEL_1 Sensor_Channel_T	//Temperature
#define PRE_DEFINE_CHANNEL_2 Sensor_Channel_T	//
#define PRE_DEFINE_CHANNEL_3 Sensor_Channel_T	//Humidity
#define PRE_DEFINE_CHANNEL_4 Sensor_Channel_T	//Light
#define PRE_DEFINE_CHANNEL_5 Sensor_Channel_T	//
#define PRE_DEFINE_CHANNEL_6 Sensor_Channel_T	//Reserved
#define PRE_DEFINE_CHANNEL_7 Sensor_Channel_T	//Reserved
#define PRE_DEFINE_CHANNEL_8 Sensor_Channel_T	//Reserved


#define CHANNEL_1_EN 
#define CHANNEL_2_EN
#define CHANNEL_3_EN
#define CHANNEL_4_EN
#define CHANNEL_5_EN
//#define CHANNEL_6_EN
//#define CHANNEL_7_EN
//#define CHANNEL_8_EN


inline void _SensorDataPreCalc(data_packet_t* val)
{
/****************************************************************************
 * 			Add Personal SensorDataPreCalc actions below					*
 ****************************************************************************/
	val->data1 = (val->data1+(val->data1>>3))-273;		//Temperature: T = (Voltage*1.13)-273
	val->data2 = val->data2;							//
	val->data3 = val->data3;							//Humidity: Nothing to do
	val->data4 = (~(val->data4)) & 0x3FF;					//Light: L = 1023 - Voltage
	val->data5 = val->data5;							//
//	val->data6 = val->data6;							//reserved
//	val->data7 = val->data7;							//reserved
//	val->data8 = val->data8;							//reserved
/****************************************************************************/
}


#endif /* SENSOR_CONFIG_H */
