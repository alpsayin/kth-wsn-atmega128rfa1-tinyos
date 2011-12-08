// $Id: RadioCountToLedsC.nc,v 1.7 2010-06-29 22:07:17 scipio Exp $

 
#include "Timer.h"
#include "RadioCountToLeds.h"
 
/**
 * Implementation of the RadioCountToLeds application. RadioCountToLeds 
 * maintains a 4Hz counter, broadcasting its value in an AM packet 
 * every time it gets updated. A RadioCountToLeds node that hears a counter 
 * displays the bottom three bits on its LEDs. This application is a useful 
 * test to show that basic AM communication and timers work.
 *
 * @author Philip Levis
 * @date   June 6 2005
 */
 
#include <stdio.h>

module RadioCountToLedsC @safe() 
{
	uses 
	{
		interface Leds;
		interface Boot;
		interface Receive;
		interface AMSend;
		interface Timer<TMilli> as MilliTimer;
		interface Timer<TMilli> as TemperatureTimer;
		interface Timer<TMilli> as RegisterPrinter;
		interface SplitControl as AMControl;
		interface Packet;
		interface AMPacket;
 
		interface UartStream;
		interface UartByte;
		
		interface StdControl as DisseminationControl;
		interface DisseminationValue<kth_wsn_command_t> as CommandValue;
		interface DisseminationUpdate<kth_wsn_command_t> as CommandUpdate;
		
		interface StdControl as RoutingControl;
		interface Send as CollectionSend;
		interface Receive as CollectionReceive;
		interface RootControl as RootControl;
		interface Read<uint16_t> as TempRead;
		
	}
}
implementation 
{

	message_t packet;

	bool locked;
	uint16_t localTemp = 0;
	uint16_t counter = 0;
  	uint16_t destination = AM_BROADCAST_ADDR;
  	kth_wsn_command_t localCommand;
 	kth_wsn_data_t localData;

	void printAddressRegisters()
	{
		uint8_t msgBuf[64];
		uint16_t msgLen;
		IEEE_ADDR_0 = TOS_AM_ADDRESS;
		msgLen = sprintf(msgBuf,"SHORT_ADDR = 0x%x%x\n", SHORT_ADDR_1, SHORT_ADDR_0);
		call UartStream.send(msgBuf, msgLen);
		msgLen = sprintf(msgBuf,"PAN_ID = 0x%x%x\n", PAN_ID_1 ,PAN_ID_0);
		call UartStream.send(msgBuf, msgLen);
		msgLen = sprintf(msgBuf,"IEEE_ADDR = 0x%x%x%x%x%x%x%x%x\n", IEEE_ADDR_7 ,IEEE_ADDR_6, IEEE_ADDR_5 ,IEEE_ADDR_4, IEEE_ADDR_3 ,IEEE_ADDR_2, IEEE_ADDR_1 ,IEEE_ADDR_0);
		call UartStream.send(msgBuf, msgLen);
	}

	task void sendCollectionMessageLedsTask() 
	{
		kth_wsn_data_t* dataMsg = (kth_wsn_data_t*)call CollectionSend.getPayload(&packet, sizeof(kth_wsn_data_t));
		dataMsg->type = DATA_TYPE_LEDS;
		atomic
		{
			dataMsg->data = call Leds.get();
		}
		dataMsg->source = TOS_NODE_ID;
 
		if (call CollectionSend.send(&packet, sizeof(kth_wsn_data_t)) != SUCCESS) 
		{
			call UartStream.send("CollectionSend fail\n", strlen("CollectionSend fail\n"));	
		}
		else 
			locked = TRUE;
	}

	task void sendCollectionMessageTempTask() 
	{
		kth_wsn_data_t* dataMsg = (kth_wsn_data_t*)call CollectionSend.getPayload(&packet, sizeof(kth_wsn_data_t));
		dataMsg->type = DATA_TYPE_TEMP;
		atomic
		{
			dataMsg->data = localTemp;
		}
		dataMsg->source = TOS_NODE_ID;
 
		if (call CollectionSend.send(&packet, sizeof(kth_wsn_data_t)) != SUCCESS) 
		{
			call UartStream.send("CollectionSend fail\n", strlen("CollectionSend fail\n"));	
		}
		else 
			locked = TRUE;
	}
	task void disseminateValueTask()
	{
		uint8_t intCounter;
		uint8_t intDestination;
		atomic
		{
			intDestination = destination;
			intCounter = counter;
		}
		localCommand.forReal = intDestination;
		localCommand.commandByte = intCounter;
		call CommandUpdate.change(&localCommand);
	}

	task void sendMessageTask()
	{
		uint16_t intCounter;
		uint16_t intDestination;
		atomic
		{
			intDestination = destination;
			intCounter = counter;
		}
		if (locked) 
		{
			return;
		}
		else 
		{
			radio_count_msg_t* rcm = (radio_count_msg_t*)call Packet.getPayload(&packet, sizeof(radio_count_msg_t));
			if (rcm == NULL) 
			{
				return;
			}
	
			rcm->counter = intCounter;
			if (call AMSend.send( intDestination, &packet, sizeof(radio_count_msg_t)) == SUCCESS) 
			{
//				call UartByte.send(intCounter);
				locked = TRUE;
			}
		}
	}
 
	event void Boot.booted() 
	{
		call RegisterPrinter.startPeriodic(1000);
		call AMControl.start();
	}

	event void AMControl.startDone(error_t err) 
	{
		uint8_t msgBuf[32];
		uint8_t msgLen;
		if (err == SUCCESS) 
		{
			msgLen = sprintf(msgBuf, "this board's ieee802.15.4 address is %d\n", call AMPacket.address());
			call UartStream.send(msgBuf, msgLen);
			call DisseminationControl.start();
			if(TOS_NODE_ID==2)
			{
				call RootControl.setRoot();
			}
			call RoutingControl.start();
			printAddressRegisters();
			call MilliTimer.startPeriodic(1000);
			call TemperatureTimer.startPeriodic(500);
		}
		else 
		{
			call AMControl.start();
		}
	}

	event void AMControl.stopDone(error_t err) 
	{
		// do nothing
	}
 
	event void MilliTimer.fired() 
	{
		if(TOS_NODE_ID==4)
		{
			atomic{
		    counter++;
		    }
		    post sendMessageTask();
		}
	}

	event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) 
	{
		uint8_t msgBuf[32];
		uint8_t msgLen;
		if (len != sizeof(radio_count_msg_t)) 
		{
			return bufPtr;
		}
		else
		{
			radio_count_msg_t* rcm = (radio_count_msg_t*)payload;
			msgLen = sprintf(msgBuf, "received count =  %d\n", rcm->counter);
			call UartStream.send(msgBuf, msgLen);
			if (rcm->counter & 0x1) 
			{
				call Leds.led0On();
			}
			else 
			{
				call Leds.led0Off();
			}
			if (rcm->counter & 0x2) 
			{
				call Leds.led1On();
			}
			else 
			{
				call Leds.led1Off();
			}
			if (rcm->counter & 0x4) 
			{
				call Leds.led2On();
			}
			else 
			{
				call Leds.led2Off();
			}
			return bufPtr;
		}
	}

	event void AMSend.sendDone(message_t* bufPtr, error_t error) 
	{
		if (&packet == bufPtr) 
		{
			locked = FALSE;
		}
	}


	async event void UartStream.receivedByte(uint8_t byte)
	{
		call UartByte.send(byte);
		atomic
		{
			counter = byte&0x0F;
			destination = (byte&0xF0)>>4;
		}
//		post sendMessageTask();	
		post disseminateValueTask();
	}

	async event void UartStream.sendDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// TODO Auto-generated method stub
	}

	async event void UartStream.receiveDone(uint8_t *buf, uint16_t len, error_t error)
	{
		// TODO Auto-generated method stub
	}
	

	event void CommandValue.changed()
	{
		uint8_t msgBuf[32];
		uint8_t msgLen;
		const kth_wsn_command_t* newVal = call CommandValue.get();
		msgLen = sprintf(msgBuf, "Command received[%d] -> 0x%x\n",newVal->forReal!=0?1:0, newVal->commandByte);
		call UartStream.send(msgBuf, msgLen);
		if(newVal->forReal != 0)
		{
			switch(newVal->commandByte)
			{
				case 0x01 : post sendCollectionMessageTempTask(); break;
				case 0x02 : post sendCollectionMessageLedsTask(); break;
				default	: post sendCollectionMessageLedsTask(); break;	 	
			}
		}
		else
		{
			call Leds.set(newVal->commandByte);
		}
	}

	event void CollectionSend.sendDone(message_t *msg, error_t error)
	{
	    if (error != SUCCESS) 
		{
			call UartStream.send("CollectionSendDone fail\n",strlen("CollectionSendDone fail\n"));	
		}
	    locked = FALSE;
	}

	event message_t * CollectionReceive.receive(message_t *msg, void *payload, uint8_t len)
	{
		uint8_t msgBuf[64];
		uint8_t msgLen;
		kth_wsn_data_t* newData = (kth_wsn_data_t*)payload;
		msgLen = sprintf(msgBuf, "Data received from: 0x%x\ttype: 0x%x\tvalue:%d\n", newData->source, newData->type, newData->data);
		call UartStream.send(msgBuf, msgLen);
		return msg;
	}

	event void TempRead.readDone(error_t result, uint16_t val)
	{
		atomic
		{
			localTemp = val;	
		}
	}

	event void TemperatureTimer.fired()
	{
		call TempRead.read();
	}

	event void RegisterPrinter.fired()
	{
		
	}
}




