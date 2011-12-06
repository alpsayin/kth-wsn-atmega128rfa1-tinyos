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
	components TestP;
	components LedsC;
	
	TestP.Boot -> MainC.Boot;
	
	TestP.Init -> SensorC.Init;
	TestP.GetData -> SensorC.GetData;
	TestP.GetDataNow -> SensorC.GetDataNow;
	TestP.GetStatus -> SensorC.GetStatus;
	
	TestP.Leds -> LedsC.Leds;
	SensorC.Leds -> LedsC.Leds;
	
	SensorC.Notify -> TestP.Notify;
		
}