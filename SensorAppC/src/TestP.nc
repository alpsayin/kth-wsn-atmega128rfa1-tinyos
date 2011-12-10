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
		interface ArrayPipe<data_packet_t> as SetRadioHistory;
		interface SetNow<data_packet_t> as SetRadioData;
		interface SetNow<command_packet_t> as SetRadioCommand;
		interface SetNow<status_packet_t> as SetRadioStatus;
		interface Notify<command_packet_t> as NotifyRadioCommand;
		
		interface Init as SerialPacketForwarderInit;
	
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
		
		uint8_t msgLen,msgBuf[128];
		
/*********************************************************/
		call UartControl.start();
/*********************************************************/
		
		msgLen = sprintf(msgBuf, "\n\r**********************************************\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		msgLen = sprintf(msgBuf, "\n\r   This is a test program for Sensor Node\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		msgLen = sprintf(msgBuf, "\n\r   Testing components: SensorC\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		msgLen = sprintf(msgBuf, "\n\r                       ControllerC\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		msgLen = sprintf(msgBuf, "\n\r**********************************************\n\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		
		while(SUCCESS!=call Init.init());
		
		call Timer_TestP.startPeriodic(33333);
		
	}


	
	
	

	

	command error_t RadioSubsystemRootControl.setRoot(){
		uint8_t msgLen,msgBuf[32];
		
		msgLen = sprintf(msgBuf, "\n\rI am set as Root\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}

	command error_t RadioSubsystemRootControl.unsetRoot(){
		uint8_t msgLen,msgBuf[32];
		
		msgLen = sprintf(msgBuf, "\n\rI am unset as Root\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}

	command bool RadioSubsystemRootControl.isRoot(){
		return FALSE;
	}

	command error_t RadioSubsystemInit.init(){
		return SUCCESS;
	}

	async command error_t SetRadioCommand.setNow(command_packet_t val){
		
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "\n\r\tC:WE-%d\tHE-%d\tBE-%d\tOP-%d\tVL-%d\tAD-%d\n\n\r"
			,val.WE, val.HE, val.BE, val.opcode, val.value, val.address);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		
		return SUCCESS;
	}

	async command error_t SetRadioData.setNow(data_packet_t val){
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "\tD:S-%d\tD1-%d\tD2-%d\tD3-%d\tD4-%d\tD5-%d\tSq-%d\n\r"
			,val.source, val.data1, val.data2, val.data3, val.data4, val.data5, val.seqNo);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}

	async command error_t SetRadioStatus.setNow(status_packet_t val){
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "\n\r\tS:ID-%d\tHE-%d\tBE-%d\tRS-%d\tIT-%d\tBI-%d\n\n\r"
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
		static uint8_t op_counter = 0;
		command_packet_t aa;
		
		
		uint8_t msgLen,msgBuf[128];
		
		msgLen = sprintf(msgBuf, "\n\rcase: %d\n\r", counter);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		switch(counter)
		{
			case 0:
				aa.address	= 101;		//echo command not for me
				aa.WE		= 1;
				aa.BE		= 1;
				aa.HE		= 1;
				aa.opcode	= 1;
				aa.value	= 1;
				break;
			case 1:
				aa.address	= 101;		//configer command not for me
				aa.WE		= 1;
				aa.BE		= 1;
				aa.HE		= 1;
				aa.opcode	= 0;
				aa.value	= 1;
				break;
			case 2:
				aa.address	= 100;		//echo command for me
				aa.WE		= 0;
				aa.BE		= 1;
				aa.HE		= 1;
				aa.opcode	= 1;
				aa.value	= 1;
				break;
			case 3:
				aa.address	= 100;		//write enable test
				aa.WE		= 0;
				aa.BE		= 1;
				aa.HE		= 1;
				aa.opcode	= 0;
				aa.value	= 1;
				break;
			case 4:
				aa.address	= 100;		//burst enable test
				aa.WE		= 1;
				aa.BE		= 1;
				aa.HE		= 0;
				aa.opcode	= 0;
				aa.value	= 1;
				break;
			case 5:
				aa.address	= 100;		//history enable test
				aa.WE		= 1;
				aa.BE		= 0;
				aa.HE		= 1;
				aa.opcode	= 0;
				aa.value	= 1;
				break;
			case 6:
				aa.address	= 100;		//enable both history and burst
				aa.WE		= 1;
				aa.BE		= 1;
				aa.HE		= 1;
				aa.opcode	= 0;
				aa.value	= 1;
				break;
			default:
				aa.opcode	= op_counter;		// test for different opcode, from 0
				op_counter = ((++op_counter) % 9);
		}		
		
		msgLen = sprintf(msgBuf, "\topcode: %d\n\n\r", aa.opcode);
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		signal NotifyRadioCommand.notify(aa);
		counter++;
		if(counter > 20)
			call Timer_TestP.stop();
	}

	command error_t SerialPacketForwarderInit.init(){
		uint8_t msgLen,msgBuf[64];
		
		msgLen = sprintf(msgBuf, "\n\rInit SerialPacketForwarder\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}

	command error_t SetRadioHistory.sendArray(data_packet_t *val, uint8_t len){
		uint8_t msgLen,msgBuf[64];
		
		msgLen = sprintf(msgBuf, "\n\rSetRadioHistory.sendArray is Called Here\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}

	command uint8_t SetRadioHistory.getArray(data_packet_t *val, uint8_t len){
		uint8_t msgLen,msgBuf[64];
		
		msgLen = sprintf(msgBuf, "\n\rSetRadioHistory.getArray is Called Here\n\r");
		while(call UartStream.send(msgBuf, msgLen)!=SUCCESS);
		
		return SUCCESS;
	}
}