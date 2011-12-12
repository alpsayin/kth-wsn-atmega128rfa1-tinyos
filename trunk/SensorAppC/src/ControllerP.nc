//
//
//  ControllerP.nc
//
//  aa
//
//  Created by Tian Junzhe on 12/9/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//



#include "ControllerConfig.h"

module ControllerP{
	
	uses interface Boot;
	
	provides interface Init;
	
	//----------------------Connect to SensorC------------------------------
	provides {
	
		interface Set<uint8_t> as SPEnable;
		interface Notify<status_packet_t> as SensorNotification;
			
	}
	
	uses {
		
		interface Init as InitSensorC;
		
		interface Get<status_packet_t> as GetStatus;
		interface ArrayPipe<data_packet_t> as GetData;
		interface Read<data_packet_t> as GetDataOne;
		
	}
	//----------------------------------------------------------------------
	
	//----------------------Connect to RadioSubsystem-----------------------
	uses 
	{
		//these interfaces should be used by Controller to send packets/receive commands
		//if a root is going to be set, it must be set with RootControl before Init
		interface RootControl as RadioSubsystemRootControl;
		interface Init as RadioSubsystemInit;
		interface ArrayPipe<data_packet_t> as SetRadioHistory;
		interface SetNow<data_packet_t> as SetRadioData;
		interface SetNow<command_packet_t> as SetRadioCommand;
		interface SetNow<status_packet_t> as SetRadioStatus;
		interface Notify<command_packet_t> as NotifyRadioCommand;
	}
	//----------------------------------------------------------------------
	
	//----------------------Connect to SerialPacketForwarder----------------
	uses
	{
		interface Init as SerialPacketForwarderInit;
		interface StdControl as SerialPacketForwarderControl;
	}
	//----------------------------------------------------------------------
	
	//----------------------Connect to IOInterfaceC-------------------------
	uses {
		interface GeneralIO as CheckRoot;
		interface GeneralIO as LightSensorEnable;
		interface GeneralIO as HumiditySensorEnable;
		interface GeneralIO as PressureSensorEnable;
		interface GeneralIO as VoltageSensorEnable;
	}
	//----------------------------------------------------------------------
	
}
implementation{
	
	bool IAmRoot;
	
	event  void Boot.booted(){
		while(SUCCESS!=call Init.init());
	}

	command error_t Init.init(){

		call CheckRoot.makeInput();
		
		while(SUCCESS!=call InitSensorC.init());

		IAmRoot = !(call CheckRoot.get());	//port with internal pull-up, default value is '1', reverse it here
		
		if(IAmRoot)		//if I am root, setup radio and serial parts
		{
			while(SUCCESS!=call SerialPacketForwarderInit.init());
			while(SUCCESS!=call RadioSubsystemRootControl.setRoot());
			while(SUCCESS!=call SerialPacketForwarderControl.start());
		}
		else			//if not, only setup radio part
		  {
			while(SUCCESS!=call RadioSubsystemRootControl.unsetRoot());
			while(SUCCESS!=call SerialPacketForwarderControl.stop());
		  }
		while(SUCCESS!=call RadioSubsystemInit.init());

		
	
		return SUCCESS;
	}

//
//Every time this function called, it means the SensorC wants to send some data out, read data_packet_t
//with SampleDataBuffer, if the buffer is full, send the content and read the rest
//
//this task can be done in several steps, which means, read 5 out, send, read another 5 out, send, like this way
//as an example
//
	command error_t SensorNotification.enable(){
	
		static data_packet_t SampleDataBuffer[CONTROLLER_BUFFER_SIZE];
		
		uint8_t i_Packet_Number;
		uint8_t i_SetDataToRadio;
		
		do
		{
			
			i_Packet_Number = !CONTROLLER_BUFFER_SIZE;
			i_Packet_Number = call GetData.getArray(SampleDataBuffer, CONTROLLER_BUFFER_SIZE);
			
			for(i_SetDataToRadio = 0;i_SetDataToRadio<i_Packet_Number;i_SetDataToRadio++)
			{
				while(SUCCESS!=call SetRadioData.setNow(SampleDataBuffer[i_SetDataToRadio]));
			}
		
		}while(CONTROLLER_BUFFER_SIZE==i_Packet_Number);
		
		return SUCCESS;
	}

//can be used or sending some warnings from the SensorC, haven't implemented now, so empty now

	command error_t SensorNotification.disable(){
		return SUCCESS;
	}

//return the sensor values with one sample request without touching SensorControlC

	event void GetDataOne.readDone(error_t result, data_packet_t val){
		if(SUCCESS == result)
		{
			call SetRadioData.setNow(val);
		}
	}

//this function will be executed if there is a command received from serial port
	event void NotifyRadioCommand.notify(command_packet_t val){
		status_packet_t status_temp,status_new;

		//TODO broadcast this val to radio first
		
		status_temp = call GetStatus.get();
		status_new  = status_temp;
		if((status_temp.node_id == val.address) || (BROADCAST_ID == val.address))
		{
			switch(val.opcode)
			{
				case COMMAND_CONFIGURE:
					//correct = TRUE;
					break;
				case COMMAND_READ_DATA:
					call GetDataOne.read();
					break;
				case COMMAND_READ_HISTORY:
					call SensorNotification.enable();
					break;
				case COMMAND_READ_STATUS:
					call SetRadioStatus.setNow(status_temp);
					break;
				case COMMAND_INTERVAL_SECONDS:
					status_new.intervalType = INTERVAL_TYPE_SECONDS;
					status_new.burstInterval	= val.value;
					break; 
				case COMMAND_INTERVAL_MINUTES:
					status_new.intervalType = INTERVAL_TYPE_MINUTES;
					status_new.burstInterval	= val.value;
					break;
				case COMMAND_INTERVAL_HOURS:
					status_new.intervalType = INTERVAL_TYPE_HOURS;
					status_new.burstInterval	= val.value;
					break;
				case COMMAND_INTERVAL_DAYS:
					status_new.intervalType = INTERVAL_TYPE_DAYS;
					status_new.burstInterval	= val.value;
					break;
				case COMMAND_ECHO:
					call SetRadioCommand.setNow(val);
				default:
					return;
			}
			if(1 == val.WE)
			{
				status_new.burstEnable		= val.BE;
				status_new.historyEnable	= val.HE;
				status_new.node_id			= status_temp.node_id;
					
			}
			signal SensorNotification.notify(status_new);
		}
	}

	command void SPEnable.set(uint8_t val){
		// TODO set the power supply for the sensors by set the value to the pins
		// with xxxSensorEnable interface
		//
		// for future work
	}
}
