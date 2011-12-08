
#include "packet_types.h"

interface PacketTypes
{
	async command uint8_t strToCommandPacket(command_packet_t* cp, uint8_t* buf);
    async command uint8_t strToDataPacket(data_packet_t* dp, uint8_t* buf);
    async command uint8_t strToStatusPacket(status_packet_t* sp, uint8_t* buf);
    
    async command uint8_t commandPacketToStr(command_packet_t* dp, uint8_t* buf);
    async command uint8_t dataPacketToStr(data_packet_t* dp, uint8_t* buf);
    async command uint8_t statusPacketToStr(status_packet_t* dp, uint8_t* buf);
    
    async command uint8_t getTypeOfPacket(uint8_t* buf);	
} 