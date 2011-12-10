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

//#define DEBUG_SENSOR_MODE

configuration bb{}

implementation{
	components MainC;

	components SensorC;
	components ControllerC;
#ifndef DEBUG_SENSOR_MODE
	components RadioSubsystemC;
	components SerialPacketForwarderC;
#else
	components PlatformSerialC;
	components TestP;
	components new TimerMilliC() as TimerTest;
#endif	
	
	
#ifndef DEBUG_SENSOR_MODE	
	ControllerC.Boot	-> MainC.Boot;
#endif

	SensorC.Init		<- ControllerC.InitSensorC;
	SensorC.GetData		<- ControllerC;
	SensorC.GetDataOne	<- ControllerC;
	SensorC.GetStatus	<- ControllerC;
	SensorC.SPEnable	-> ControllerC;
	SensorC.Notify		-> ControllerC;

#ifndef DEBUG_SENSOR_MODE
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
	
	MainC.Boot <- TestP.Boot;

	TestP.Timer_TestP -> TimerTest.Timer;
	
	TestP.UartControl	-> PlatformSerialC.UartControl;
	TestP.UartByte		-> PlatformSerialC.UartByte;
	TestP.UartStream	-> PlatformSerialC.UartStream;
	
	ControllerC.Init						<- TestP;
	ControllerC.RadioSubsystemRootControl	-> TestP;
	ControllerC.RadioSubsystemInit			-> TestP;
	ControllerC.SetRadioCommand				-> TestP;
	ControllerC.SetRadioData				-> TestP;
	ControllerC.SetRadioStatus				-> TestP;
	ControllerC.NotifyRadioCommand			-> TestP;
	
#endif	
}