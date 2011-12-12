//
//
//  SensorSubsystemP.nc
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


module SensorSubsystemP{
	
	provides {
		
		interface Read<data_packet_t>;
		interface Read<data_packet_t> as ReadOne;
		
	}
	
	uses {
		
		interface Read<uint16_t> as Data1ADC;
		interface Read<uint16_t> as Data2ADC;
		interface Read<uint16_t> as Data3ADC;
		interface Read<uint16_t> as Data4ADC;
		interface Read<uint16_t> as Data5ADC;
		interface Read<uint16_t> as Data6ADC;
		interface Read<uint16_t> as Data7ADC;
		interface Read<uint16_t> as Data8ADC;
		
	}
}
implementation{

	data_packet_t sensorData;
	bool mode;

	command error_t Read.read(){
		
		mode = TRUE;
		
		call Data1ADC.read();
		
		return SUCCESS;
	}
	
	
	command error_t ReadOne.read(){
		
		mode = FALSE;
		
		call Data1ADC.read();
		
		return SUCCESS;
	}
	
	void FormDataPacket()
	{
		static uint16_t sequenceNumber = 0;
		
		sensorData.source	= NODE_ID;
		sensorData.seqNo	= sequenceNumber++;
		_SensorDataPreCalc(&sensorData);
	}

	event void Data1ADC.readDone(error_t result, uint16_t val){

#ifdef CHANNEL_1_EN
		if(SUCCESS == result)
			sensorData.data1 = val;
#endif
		call Data2ADC.read();
	}

	event void Data2ADC.readDone(error_t result, uint16_t val){

#ifdef CHANNEL_2_EN
		if(SUCCESS == result)
			sensorData.data2 = val;
#endif
		call Data3ADC.read();
	}

	event void Data3ADC.readDone(error_t result, uint16_t val){

#ifdef CHANNEL_3_EN
		if(SUCCESS == result)
			sensorData.data3 = val;
#endif
		call Data4ADC.read();
	}

	event void Data4ADC.readDone(error_t result, uint16_t val){

#ifdef CHANNEL_4_EN
		if(SUCCESS == result)
			sensorData.data4 = val;
#endif
		call Data5ADC.read();
	}

	event void Data5ADC.readDone(error_t result, uint16_t val){

#ifdef CHANNEL_5_EN
		if(SUCCESS == result)
			sensorData.data5 = val;
#endif
		call Data6ADC.read();
	}

	event void Data6ADC.readDone(error_t result, uint16_t val){

#ifdef CHANNEL_6_EN
		if(SUCCESS == result)
			sensorData.data6 = val;
#endif
		call Data7ADC.read();
	}

	event void Data7ADC.readDone(error_t result, uint16_t val){
		
#ifdef CHANNEL_7_EN
		if(SUCCESS == result)
			sensorData.data7 = val;
#endif
		call Data8ADC.read();
	}

	event void Data8ADC.readDone(error_t result, uint16_t val){
		
#ifdef CHANNEL_8_EN
		if(SUCCESS == result)
			sensorData.data8 = val;
#endif
		FormDataPacket();
		if(mode)
			signal Read.readDone(SUCCESS, sensorData);
		else
			signal ReadOne.readDone(SUCCESS, sensorData);
	}
	

	
}