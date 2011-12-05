
#include "SensorConfig.h"
#include "tos.h"


module SensorControlP{
	
	provides {
	
		interface Init;

		interface Set<status_packet_t>;
		interface Get<status_packet_t>;
		interface Read<data_packet_t>;
	
	}
	
	uses {
		
		interface Timer<TIMER_UNIT> as Timer0;
		interface Read<data_packet_t> as GetData;
		interface Queue<data_packet_t> as StoreData;

		interface Notify<uint8_t>;

	}
}
implementation{

	status_packet_t status;

	command error_t Init.init(){
		
		status.historyEnable	= 0;
        status.burstEnable		= 0;
        status.reserved			= 0;
        status.intervalType		= 0;
        status.burstInterval	= 0;
        status.node_id			= 1;
        
		return SUCCESS;
	}

	event void Timer0.fired(){
		
		call GetData.read();
	}

	command void Set.set(status_packet_t val){
		status = val;
		
	}

	command status_packet_t Get.get(){
		return status;
	}

	command error_t Read.read(){
		return SUCCESS;
	}
	
	event void GetData.readDone(error_t result, data_packet_t val){

	}


	event void Notify.notify(uint8_t val){
		// TODO Auto-generated method stub
	}
}