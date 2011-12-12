
#include "packet_types.h"

interface PacketTypes
{
	async command uint8_t strToCommandPacket(command_packet_t* cp, uint8_t* buf);
    async command uint8_t strToDataPacket(data_packet_t* dp, uint8_t* buf);
    async command uint8_t strToStatusPacket(status_packet_t* sp, uint8_t* buf);
    
    async command uint8_t commandPacketToStr(command_packet_t* dp, uint8_t* buf);
    async command uint8_t dataPacketToStr(data_packet_t* dp, uint8_t* buf);
    async command uint8_t statusPacketToStr(status_packet_t* dp, uint8_t* buf);
    
  	async command error_t dataPacketTohistoryPacket(data_packet_t*, history_packet_t*);
  	async command error_t historyPacketToDataPacket(data_packet_t*, history_packet_t*);
    
    async command uint8_t getTypeOfPacket(uint8_t* buf);	
} 