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


configuration bb{}

implementation{
	components MainC;

	components SensorC;
	components ControllerC;
//	components RadioSubsystemC;
//	components SerialPacketForwarderC;

	components TestP;
	
	components new TimerMilliC() as TimerTest;
	
	
	
//	ControllerC.Boot	-> MainC.Boot;
	
	SensorC.Init		<- ControllerC.InitSensorC;
	SensorC.GetData		<- ControllerC;
	SensorC.GetDataOne	<- ControllerC;
	SensorC.GetStatus	<- ControllerC;
	SensorC.SPEnable	-> ControllerC;
	SensorC.Notify		-> ControllerC;
	
//	ControllerC.RadioSubsystemRootControl	-> RadioSubsystemC;
//	ControllerC.RadioSubsystemInit			-> RadioSubsystemC;
//	ControllerC.SetRadioCommand				-> RadioSubsystemC;
//	ControllerC.SetRadioData				-> RadioSubsystemC;
//	ControllerC.SetRadioStatus				-> RadioSubsystemC;
//	ControllerC.NotifyRadioCommand			-> RadioSubsystemC;
//	
//	RadioSubsystemC.ForwardCommand		->SerialPacketForwarderC;
//	RadioSubsystemC.ForwardData			->SerialPacketForwarderC;
//	RadioSubsystemC.ForwardStatus		->SerialPacketForwarderC;
//	RadioSubsystemC.NotifySerialCommand	->SerialPacketForwarderC;
	
	
	components PlatformSerialC;
	
	TestP.Timer_TestP -> TimerTest.Timer;
	
	TestP.UartControl -> PlatformSerialC.UartControl;
	TestP.UartByte	-> PlatformSerialC.UartByte;
	TestP.UartStream	-> PlatformSerialC.UartStream;
	
	ControllerC.Init						<- TestP;
	ControllerC.RadioSubsystemRootControl	-> TestP;
	ControllerC.RadioSubsystemInit			-> TestP;
	ControllerC.SetRadioCommand				-> TestP;
	ControllerC.SetRadioData				-> TestP;
	ControllerC.SetRadioStatus				-> TestP;
	ControllerC.NotifyRadioCommand			-> TestP;
	
	
	MainC.Boot <- TestP.Boot;
	
}