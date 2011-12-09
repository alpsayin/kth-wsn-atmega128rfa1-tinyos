//
//
//  IOInterfaceC.nc
//
//  aa
//
//  Created by Tian Junzhe on 12/9/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//


configuration IOInterfaceC{
	
	provides {
		
		interface GeneralIO as CheckRoot;
		interface GeneralIO as LightSensorEnable;
		interface GeneralIO as HumiditySensorEnable;
		interface GeneralIO as PressureSensorEnable;
		interface GeneralIO as VoltageSensorEnable;
		
		
	}
	
}
implementation{

	components HplAtm128GeneralIOC as IO;
	
	CheckRoot				= IO.PortD6;
	LightSensorEnable		= IO.PortB0;
	HumiditySensorEnable	= IO.PortB1;
	PressureSensorEnable	= IO.PortB2;
	VoltageSensorEnable		= IO.PortB3;
	
}