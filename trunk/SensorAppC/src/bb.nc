//
//
//  bb.nc
//
//  aa
//
//  Created by Tian Junzhe on 12/5/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//

#define NORMAL_RUN					0
#define TEST_SENSOR_AND_CONTROLLER	1
#define TEST_SERIAL_PORT			2

#define DEBUG_MODE NORMAL_RUN

configuration bb{}

implementation{
	components MainC;

#if DEBUG_MODE == NORMAL_RUN
	components SensorC;
	components ControllerC;
	components RadioSubsystemC;
	components SerialPacketForwarderC;
#else
#if DEBUG_MODE == TEST_SENSOR_AND_CONTROLLER
	components SensorC;
	components ControllerC;
#else
#if DEBUG_MODE == TEST_SERIAL_PORT
	components SerialPacketForwarderC;
#endif
#endif
#endif


#if DEBUG_MODE == NORMAL_RUN
	
	ControllerC.Boot	-> MainC.Boot;
	
	SensorC.Init		<- ControllerC.InitSensorC;
	SensorC.GetData		<- ControllerC.GetData;
	SensorC.GetDataOne	<- ControllerC;
	SensorC.GetStatus	<- ControllerC;
	SensorC.SPEnable	-> ControllerC;
	SensorC.Notify		-> ControllerC;

	ControllerC.RadioSubsystemRootControl	-> RadioSubsystemC;
	ControllerC.RadioSubsystemInit			-> RadioSubsystemC;
	ControllerC.SetRadioCommand				-> RadioSubsystemC;
	ControllerC.SetRadioData				-> RadioSubsystemC;
	ControllerC.SetRadioStatus				-> RadioSubsystemC;
	ControllerC.NotifyRadioCommand			-> RadioSubsystemC;
	
	ControllerC.SerialPacketForwarderInit	-> SerialPacketForwarderC;
	
	RadioSubsystemC.ForwardCommand		-> SerialPacketForwarderC;
	RadioSubsystemC.ForwardData			-> SerialPacketForwarderC;
	RadioSubsystemC.ForwardStatus		-> SerialPacketForwarderC;
	RadioSubsystemC.NotifySerialCommand	-> SerialPacketForwarderC;

#else

#if DEBUG_MODE == TEST_SENSOR_AND_CONTROLLER

	components PlatformSerialC;
	components TestP;
	components new TimerMilliC() as TimerTest;

	MainC.Boot <- TestP.Boot;

	SensorC.Init		<- ControllerC.InitSensorC;
	SensorC.GetData		<- ControllerC.GetData;
	SensorC.GetDataOne	<- ControllerC;
	SensorC.GetStatus	<- ControllerC;
	SensorC.SPEnable	-> ControllerC;
	SensorC.Notify		-> ControllerC;
	
	
	ControllerC.Init						<- TestP;
	ControllerC.RadioSubsystemRootControl	-> TestP;
	ControllerC.RadioSubsystemInit			-> TestP.RadioSubsystemInit;
	ControllerC.SetRadioCommand				-> TestP;
	ControllerC.SetRadioData				-> TestP;
	ControllerC.SetRadioStatus				-> TestP;
	ControllerC.NotifyRadioCommand			-> TestP;
	
	ControllerC.SerialPacketForwarderInit	-> TestP.SerialPacketForwarderInit;

	TestP.UartControl	-> PlatformSerialC.UartControl;
	TestP.UartByte		-> PlatformSerialC.UartByte;
	TestP.UartStream	-> PlatformSerialC.UartStream;

	TestP.Timer_TestP 	-> TimerTest.Timer;
	
#else

#if DEBUG_MODE == TEST_SERIAL_PORT

	components DummyNotificationReceiverP;
	components PlatformLedsC;	
	components LedsC;
	components PlatformSerialC;
	components new PacketTypesP() as PacketTypesDummy;
	components new TimerMilliC() as Timer0;
	components new TimerMilliC() as Timer1;
	
	DummyNotificationReceiverP.Boot 	-> MainC;
	DummyNotificationReceiverP.Leds 	-> LedsC;
	DummyNotificationReceiverP.UartByte -> PlatformSerialC;
	
	DummyNotificationReceiverP.CommandNotification	-> SerialPacketForwarderC;
	DummyNotificationReceiverP.ForwardCommand 		-> SerialPacketForwarderC;
	DummyNotificationReceiverP.ForwardData			-> SerialPacketForwarderC;
	DummyNotificationReceiverP.ForwardStatus		-> SerialPacketForwarderC;
	
	DummyNotificationReceiverP.PacketTypes			-> PacketTypesDummy;
	
	DummyNotificationReceiverP.Timer0 -> Timer0;
	DummyNotificationReceiverP.Timer1 -> Timer1;

#endif
#endif
#endif

}