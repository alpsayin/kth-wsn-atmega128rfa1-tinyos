
#include "ControllerConfig.h"

configuration ControllerC{

	provides {

		interface Notify<status_packet_t>;
			
	}
	
	uses {
		
		interface Init as InitSensorSystem;
		interface Get<status_packet_t> as GetStatus;
		interface Get<data_packet_t> as GetData;
		interface Read<data_packet_t> as GetDataOne;
		
	}

}
implementation{
	
	components ControllerP;
	
}