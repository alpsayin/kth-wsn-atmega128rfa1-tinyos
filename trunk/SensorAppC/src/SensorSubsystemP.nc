
#include "SensorConfig.h"


module SensorSubsystemP{
	
	provides {
		
		interface Read<data_packet_t> as GetData;
		interface ReadNow<data_packet_t> as GetDataNow;
		
	}
	
	uses {
		
		interface Read<uint16_t> as TempADC;
		interface Read<uint16_t> as vol0ADC;
		interface Read<uint16_t> as vol1ADC;
		interface Read<uint16_t> as vol2ADC;
		interface Read<uint16_t> as vol3ADC;
		
	}
}
implementation{

	data_packet_t sensorData;
	bool mode;

	command error_t GetData.read(){
		
		mode = TRUE;
		
		call TempADC.read();
//		call vol0ADC.read();
//		call vol1ADC.read();
//		call vol2ADC.read();
//		call vol3ADC.read();
		
		
		return SUCCESS;
	}
	
	
	async command error_t GetDataNow.read(){
		
		mode = FALSE;
		
		call TempADC.read();
		call vol0ADC.read();
		call vol1ADC.read();
		call vol2ADC.read();
		call vol3ADC.read();
		
		return SUCCESS;
	}
	

	event void TempADC.readDone(error_t result, uint16_t val){
		
		if(SUCCESS == result)
			sensorData.TEMPERATURE = val;
		
		call vol0ADC.read();
	}

	event void vol0ADC.readDone(error_t result, uint16_t val){
		
		if(SUCCESS == result)
			sensorData.PRESSURE = val;
		
		call vol1ADC.read();
	}

	event void vol1ADC.readDone(error_t result, uint16_t val){
		
		if(SUCCESS == result)
			sensorData.HUMIDITY = val;
		
		call vol2ADC.read();
	}

	event void vol2ADC.readDone(error_t result, uint16_t val){
		
		if(SUCCESS == result)
			sensorData.LUMINOSITY = val;
		
		call vol3ADC.read();
	}

	event void vol3ADC.readDone(error_t result, uint16_t val){
		
		if(SUCCESS == result)
			sensorData.BATTERY = val;
		
		if(mode)
			signal GetData.readDone(SUCCESS, sensorData);
		else
			signal GetDataNow.readDone(SUCCESS, sensorData);
	}

	
}