
#include "hardware.h"

configuration PushButtonC
{
	provides interface PushButton as PushButton0;
	provides interface Init as PushButton0Init;
}
implementation
{
	components PushButtonP, PlatformC;
  	components HplAtm128GeneralIOC as IO;
  	PlatformC.Init = PushButton0Init;
	PushButtonP.GeneralIO -> IO.PortE5;
	PushButton0 = PushButtonP.PushButton0;
	PushButton0Init = PushButtonP.Init;
}