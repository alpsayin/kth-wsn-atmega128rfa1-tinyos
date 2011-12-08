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

	uses interface Boot;


	uses {
		
		interface Init;
			
	}
	
//-----------------------connect to Serial Port------------------------------
	provides {
		
		interface Notify<command_packet_t> as CommandNotification;
		interface SetNow<command_packet_t> as ForwardCommand;
		interface SetNow<data_packet_t> as ForwardData;
		interface SetNow<status_packet_t> as ForwardStatus;
		
	}
	
}

implementation{
	
	event void Boot.booted(){
		call Init.init();
		
		
	}




	

	

	command error_t CommandNotification.disable(){
		return SUCCESS;
	}

	command error_t CommandNotification.enable(){
		// TODO Auto-generated method stub
		return SUCCESS;
	}

	async command error_t ForwardCommand.setNow(command_packet_t val){
		// TODO Auto-generated method stub
		return SUCCESS;
	}

	async command error_t ForwardData.setNow(data_packet_t val){
		// TODO Auto-generated method stub
		return SUCCESS;
	}

	async command error_t ForwardStatus.setNow(status_packet_t val){
		// TODO Auto-generated method stub
		return SUCCESS;
	}
}