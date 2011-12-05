
#include <stdio.h>
#include <inttypes.h>
#include "packet_types.h"

#ifndef LOW
#define LOW(n) (n & 0x0F)
#endif

#ifndef HIGH
#define HIGH(n) ((n>>4) & 0x0F)
#endif

static uint8_t hexTable[16] = "0123456789abcdef";

char asciihexToNum(char c)
{
    if(c>='a' && c<='z')
        return c-'a'+10;
    if(c>='A' && c<='Z')
        return c-'A'+10;
    if(c>='0' && c<='9')
        return c-'0';
    return 0;
}
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
int strToPacket(void* dp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i=0, len, type;
    char* ptr = (char*)dp;
    if(buf[i++] != '[')
        return PACKET_ERROR;
    switch( (type=LOW(buf[i++])) )
    {
        case PACKET_COMMAND: len = sizeof(command_packet_t); break;
        case PACKET_DATA: len = sizeof(data_packet_t); break;
        case PACKET_DATA_COMPRESSED: len = sizeof(compressed_data_packet_t); break;
        case PACKET_STATUS: len = sizeof(status_packet_t); break;
        default: return PACKET_ERROR;
    }
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[i+2*len] != ']')
        return PACKET_ERROR;
    for(ptr=(char*)dp; ptr<(char*)dp+len; ptr++) 
    {
        *ptr = (asciihexToNum(buf[i++])<<4) | asciihexToNum(buf[i++]);
    }
    if(buf[i] != ']')
        return PACKET_ERROR;
    return type;
}
int commandToBuffer(command_packet_t* cp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i, len;
    char* ptr;
    buf[i++]='[';
    len = sizeof(command_packet_t);
    for(ptr=(char*)cp; ptr<(char*)cp+len; ptr++)
    {
        buf[i++] = hexTable[HIGH((*ptr))];
        buf[i++] = hexTable[LOW((*ptr))];
    }
    buf[i++] = ']';
    buf[i] = 0;
    return i;
}
int getTypeOfPacket(char* buf)
{
    int len, type;
    if(buf[0]!='[')
        return PACKET_ERROR;
    if(buf[2]!=':')
        return PACKET_ERROR;
    switch( (type=LOW(buf[1])) )
    {
        case PACKET_COMMAND: len = sizeof(command_packet_t); break;
        case PACKET_DATA: len = sizeof(data_packet_t); break;
        case PACKET_DATA_COMPRESSED: len = sizeof(compressed_data_packet_t); break;
        case PACKET_STATUS: len = sizeof(status_packet_t); break;
        default: return PACKET_ERROR;
    }
    if(buf[3+2*len] != ']')
        return PACKET_ERROR;
    return type;
}
int dataPacketToStr(data_packet_t* dp, char* buf)
{
    uint8_t i, len;
    //header
    buf[i++]='[';
    buf[i++]=hexTable[PACKET_DATA];
    buf[i++]=':';
    len = sizeof(data_packet_t);
    //data
    buf[i++] = hexTable[HIGH((dp->data1)>>8)];
    buf[i++] = hexTable[LOW((dp->data1)>>8)];
    buf[i++] = hexTable[HIGH((dp->data1))];
    buf[i++] = hexTable[LOW((dp->data1))];
    buf[i++] = hexTable[HIGH((dp->data2)>>8)];
    buf[i++] = hexTable[LOW((dp->data2)>>8)];
    buf[i++] = hexTable[HIGH((dp->data2))];
    buf[i++] = hexTable[LOW((dp->data2))];
    buf[i++] = hexTable[HIGH((dp->data3)>>8)];
    buf[i++] = hexTable[LOW((dp->data3)>>8)];
    buf[i++] = hexTable[HIGH((dp->data3))];
    buf[i++] = hexTable[LOW((dp->data3))];
    buf[i++] = hexTable[HIGH((dp->data4)>>8)];
    buf[i++] = hexTable[LOW((dp->data4)>>8)];
    buf[i++] = hexTable[HIGH((dp->data4))];
    buf[i++] = hexTable[LOW((dp->data4))];
    buf[i++] = hexTable[HIGH((dp->data5)>>8)];
    buf[i++] = hexTable[LOW((dp->data5)>>8)];
    buf[i++] = hexTable[HIGH((dp->data5))];
    buf[i++] = hexTable[LOW((dp->data5))];
    buf[i++] = hexTable[HIGH((dp->source)>>8)];
    buf[i++] = hexTable[LOW((dp->source)>>8)];
    buf[i++] = hexTable[HIGH((dp->source))];
    buf[i++] = hexTable[LOW((dp->source))];
    //footer
    buf[i++] = ']';
    buf[i] = 0;
    return i;
}
int commandPacketToStr(command_packet_t* cp, char* buf)
{
    uint8_t i, len;
    //header
    buf[i++]='[';
    buf[i++]=hexTable[PACKET_COMMAND];
    buf[i++]=':';
    len = sizeof(data_packet_t);
    //data
    buf[i++] = hexTable[cp->WE];
    buf[i++] = hexTable[cp->HE];
    buf[i++] = hexTable[cp->BE];
    buf[i++] = hexTable[HIGH((cp->opcode))];
    buf[i++] = hexTable[LOW((cp->opcode))];
    buf[i++] = hexTable[HIGH((cp->value))];
    buf[i++] = hexTable[LOW((cp->value))];
    buf[i++] = hexTable[HIGH((cp->address)>>8)];
    buf[i++] = hexTable[LOW((cp->address)>>8)];
    buf[i++] = hexTable[HIGH((cp->address))];
    buf[i++] = hexTable[LOW((cp->address))];
    //footer
    buf[i++] = ']';
    buf[i] = 0;
    return i;
}
int statusPacketToStr(status_packet_t* sp, char* buf)
{
    uint8_t i, len;
    //header
    buf[i++]='[';
    buf[i++]=hexTable[PACKET_DATA];
    buf[i++]=':';
    len = sizeof(data_packet_t);
    //data
    buf[i++] = hexTable[HIGH((sp->node_id)>>8)];
    buf[i++] = hexTable[LOW((sp->node_id)>>8)];
    buf[i++] = hexTable[HIGH((sp->node_id))];
    buf[i++] = hexTable[LOW((sp->node_id))];
    buf[i++] = hexTable[HIGH((sp->burstInterval))];
    buf[i++] = hexTable[LOW((sp->burstInterval))];
    buf[i++] = hexTable[sp->intervalType];
    buf[i++] = hexTable[sp->historyEnable];
    buf[i++] = hexTable[sp->burstEnable];
    //footer
    buf[i++] = ']';
    buf[i] = 0;
    return i;
}