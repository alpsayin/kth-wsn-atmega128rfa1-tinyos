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
	components TestP;
	
	SensorC.Init		<- ControllerC.InitSensorC;
	SensorC.SPEnable	-> ControllerC;
	SensorC.GetData		<- ControllerC;
	SensorC.GetDataOne	<- ControllerC;
	SensorC.GetStatus	<- ControllerC;
	SensorC.Notify		-> ControllerC;
	
	MainC.Boot <- TestP.Boot;
	
	ControllerC.CommandNotification -> TestP.CommandNotification;
	ControllerC.ForwardCommand		-> TestP.ForwardCommand;
	ControllerC.ForwardData			-> TestP.ForwardData;
	ControllerC.ForwardStatus		-> TestP.ForwardStatus;
	ControllerC.Init				<- TestP.Init;
	
}