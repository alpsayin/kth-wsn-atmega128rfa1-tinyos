//
//
//  TestP.nc
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

module TestP{

	provides {
		
		interface Notify<status_packet_t>;

	}

	uses {
		interface Boot;
		interface Leds;
		
		interface Init;
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
		interface Read<data_packet_t> as GetDataOne;
	
	}
	
}

implementation{
	
	event void Boot.booted(){
		status_packet_t status;
		
		call Init.init();
		
		status = call GetStatus.get();
		
		status.burstEnable = 1;
		status.burstInterval = 1;
		status.historyEnable = 1;
		status.intervalType = 0;
		
		signal Notify.notify(status);
	}




	command error_t Notify.enable(){
		data_packet_t SampleDataBuffer[BUFFER_SIZE+5];
		
		uint8_t i;
		
		i = 0;
		do
		{
			SampleDataBuffer[i] = call GetData.get();
			i++;
		}while(SampleDataBuffer[i-1].source != 0);
		
		return SUCCESS;
	}

	command error_t Notify.disable(){
		// TODO Auto-generated method stub
		return SUCCESS;
	}

	event void GetDataOne.readDone(error_t result, data_packet_t val){
		// TODO Auto-generated method stub
	}

	
}