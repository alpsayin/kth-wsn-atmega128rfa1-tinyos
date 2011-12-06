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
	
	TestP.Boot -> MainC.Boot;
	
	TestP.Init -> SensorC.Init;
	TestP.GetData -> SensorC.GetData;
	TestP.GetDataOne -> SensorC.GetDataOne;
	TestP.GetStatus -> SensorC.GetStatus;
	
	SensorC.Notify -> TestP.Notify;
		
}