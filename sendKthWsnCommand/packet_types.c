
#include <stdio.h>
#include "packet_types.h"

void decompressPacket(data_packet_t* dp, compressed_data_packet_t* dpc)
{
    dp->source = dpc->source;
    dp->data1 = ( (uint16_t)(dpc->highBytes.data1)<<8 | dpc->lowBytes.data1);
    dp->data2 = ( (uint16_t)(dpc->highBytes.data2)<<8 | dpc->lowBytes.data2);
    dp->data3 = ( (uint16_t)(dpc->highBytes.data3)<<8 | dpc->lowBytes.data3);
    dp->data4 = ( (uint16_t)(dpc->highBytes.data4)<<8 | dpc->lowBytes.data4);
    dp->data5 = ( (uint16_t)(dpc->highBytes.data5)<<8 | dpc->lowBytes.data5);
}
void compressPacket(data_packet_t* dp, compressed_data_packet_t* dpc)
{
    dpc->source = dp->source;

    dpc->lowBytes.data1 = (uint8_t)(dp->data1&0xFF);
    dpc->highBytes.data1 = (uint8_t)((dp->data1>>8)&0x03);

    dpc->lowBytes.data2 = (uint8_t)(dp->data2&0xFF);
    dpc->highBytes.data2 = (uint8_t)((dp->data2>>8)&0x03);

    dpc->lowBytes.data3 = (uint8_t)(dp->data3&0xFF);
    dpc->highBytes.data3 = (uint8_t)((dp->data3>>8)&0x03);

    dpc->lowBytes.data4 = (uint8_t)(dp->data4&0xFF);
    dpc->highBytes.data4 = (uint8_t)((dp->data4>>8)&0x03);

    dpc->lowBytes.data5 = (uint8_t)(dp->data5&0xFF);
    dpc->highBytes.data5 = (uint8_t)((dp->data5>>8)&0x03);
}
int packetToStr(data_packet_t* dp, char* buf)
{
   return sprintf(buf, "[0x%x : 0x%x 0x%x 0x%x 0x%x 0x%x]",dp->source, dp->data1, dp->data2, dp->data3, dp->data4, dp->data5);
}
int compressedPacketToStr(compressed_data_packet_t* dpc, char* buf)
{
    return sprintf(buf, "[0x%x : 0x%x%x 0x%x%x 0x%x%x 0x%x%x]", dpc->source, dpc->highBytes.data1, dpc->lowBytes.data1 ,dpc->highBytes.data2, dpc->lowBytes.data2 ,dpc->highBytes.data3, dpc->lowBytes.data3 ,dpc->highBytes.data4, dpc->lowBytes.data4 );
}
int commandPacketToStr(command_packet_t* cps, char* buf)
{
    return sprintf(buf, "[0x%x %x %x %x 0x%x 0x%x]", cps->opcode, cps->WE, cps->HE, cps->BE, cps->value, cps->address);
}
