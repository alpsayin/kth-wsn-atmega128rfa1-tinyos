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
#include "ControllerConfig.h"
#include "RadioConfig.h"
#include <stdio.h>



module TestP{

	uses interface Boot;

	uses interface Init;

	uses interface Timer<TMilli> as Timer_TestP;
	
	provides 
	{
		//these interfaces should be used by Controller to send packets/receive commands
		//if a root is going to be set, it must be set with RootControl before Init
		interface RootControl as RadioSubsystemRootControl;
		interface Init as RadioSubsystemInit;
		interface SetNow<data_packet_t> as SetRadioData;
		interface SetNow<command_packet_t> as SetRadioCommand;
		interface SetNow<status_packet_t> as SetRadioStatus;
		interface Notify<command_packet_t> as NotifyRadioCommand;
	}	
	
	
	//----------------------Connect to Serial only for debug----------------
	//provides {}
	
	uses {
		interface StdControl as UartControl;
		interface UartByte;
		interface UartStream;
	}
	//----------------------------------------------------------------------
	
}

implementation{

/*********************************************************/
	void PrintAValue(uint8_t Titile, uint16_t val)
	{
		uint8_t msgLen,msgBuf[32];
		while(call UartStream.send(&Titile, 1)!=SUCCESS);
		msgLen = sprintf(msgBuf, " = %d ", val);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		if(Titile == 'q')
		{
			msgLen = sprintf(msgBuf, "\n\r");
			while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		}
		if(Titile == 'i')
		{
			msgLen = sprintf(msgBuf, "\n\n\r");
			while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		}
	}

	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error){
		// TODO Auto-generated method stub
	}

	async event void UartStream.receivedByte(uint8_t byte){
		// TODO Auto-generated method stub
	}

/***********************************************************/

	
	event void Boot.booted(){
		
		
		
/*********************************************************/
		call UartControl.start();
/*********************************************************/
		
		
		while(SUCCESS!=call Init.init());
		
		call Timer_TestP.startPeriodic(23000);
		
	}


	
	
	

	

	command error_t RadioSubsystemRootControl.setRoot(){
		return SUCCESS;
	}

	command error_t RadioSubsystemRootControl.unsetRoot(){
		return SUCCESS;
	}

	command bool RadioSubsystemRootControl.isRoot(){
		return TRUE;
	}

	command error_t RadioSubsystemInit.init(){
		return SUCCESS;
	}

	async command error_t SetRadioCommand.setNow(command_packet_t val){
		
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "C:WE-%d\tHE-%d\tBE-%d\tOP-%d\tVL-%d\tAD-%d\n\r"
			,val.WE, val.HE, val.BE, val.opcode, val.value, val.address);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		
		return SUCCESS;
	}

	async command error_t SetRadioData.setNow(data_packet_t val){
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "D:S-%d\tD1-%d\tD2-%d\tD3-%d\tD4-%d\tD5-%d\tSq-%d\n\r"
			,val.source, val.data1, val.data2, val.data3, val.data4, val.data5, val.seqNo);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}

	async command error_t SetRadioStatus.setNow(status_packet_t val){
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "S:ID-%d\tHE-%d\tBE-%d\tRS-%d\tIT-%d\tBI-%d\n\r"
			,val.node_id, val.historyEnable, val.burstEnable, val.reserved, val.intervalType, val.burstInterval);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}

	command error_t NotifyRadioCommand.enable(){
		// TODO Auto-generated method stub
		return SUCCESS;
	}

	command error_t NotifyRadioCommand.disable(){
		// TODO Auto-generated method stub
		return SUCCESS;
	}
	
	
	
	

	event void Timer_TestP.fired(){
		static uint8_t counter = 0;
		command_packet_t aa;
		
		
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "\n\rOPCODE: %d\n\n\r", counter);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		aa.address	= 100;
		aa.WE		= 1;
		aa.BE		= 1;
		aa.HE		= 1;
		aa.opcode	= counter;
		aa.value	= 1;
		
		signal NotifyRadioCommand.notify(aa);
		
		counter = ((++counter) % 8);
		
	}
}