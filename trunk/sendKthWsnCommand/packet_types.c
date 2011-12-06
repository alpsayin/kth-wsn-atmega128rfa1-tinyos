
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
int strToCommandPacket(command_packet_t* cp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i=0;
    uint8_t len = SIZE_COMMAND;
    if(buf[i++] != '[')
        return PACKET_ERROR;
    if(asciihexToNum(buf[i++]) != PACKET_COMMAND)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len-1] != ']')
        return PACKET_ERROR;
    //copy the actual data flags, opcode, value, address
    cp->WE = buf[i++]&0x01;
    cp->HE = buf[i++]&0x01;
    cp->BE = buf[i++]&0x01;
    cp->opcode = asciihexToNum(buf[i++])<<8;
    cp->opcode |= asciihexToNum(buf[i++]);
    cp->value = asciihexToNum(buf[i++])<<8;
    cp->value |= asciihexToNum(buf[i++]);
    cp->address = asciihexToNum(buf[i++])<<24;
    cp->address |= asciihexToNum(buf[i++])<<16;
    cp->address |= asciihexToNum(buf[i++])<<8;
    cp->address |= asciihexToNum(buf[i++]);

    if(buf[i] != ']')
        return PACKET_ERROR;
    return PACKET_COMMAND;
}
int strToDataPacket(data_packet_t* dp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i=0;
    uint8_t len = SIZE_DATA;
    if(buf[i++] != '[')
        return PACKET_ERROR;
    if(asciihexToNum(buf[i++]) != PACKET_DATA)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len-1] != ']')
        return PACKET_ERROR;
    //copy the actual data flags, opcode, value, address
    dp->data1 = asciihexToNum(buf[i++])<<24;
    dp->data1 |= asciihexToNum(buf[i++])<<16;
    dp->data1 |= asciihexToNum(buf[i++])<<8;
    dp->data1 |= asciihexToNum(buf[i++]);
    dp->data2 = asciihexToNum(buf[i++])<<24;
    dp->data2 |= asciihexToNum(buf[i++])<<16;
    dp->data2 |= asciihexToNum(buf[i++])<<8;
    dp->data2 |= asciihexToNum(buf[i++]);
    dp->data3 = asciihexToNum(buf[i++])<<24;
    dp->data3 |= asciihexToNum(buf[i++])<<16;
    dp->data3 |= asciihexToNum(buf[i++])<<8;
    dp->data3 |= asciihexToNum(buf[i++]);
    dp->data4 = asciihexToNum(buf[i++])<<24;
    dp->data4 |= asciihexToNum(buf[i++])<<16;
    dp->data4 |= asciihexToNum(buf[i++])<<8;
    dp->data4 |= asciihexToNum(buf[i++]);
    dp->data5 = asciihexToNum(buf[i++])<<24;
    dp->data5 |= asciihexToNum(buf[i++])<<16;
    dp->data5 |= asciihexToNum(buf[i++])<<8;
    dp->data5 |= asciihexToNum(buf[i++]);
    dp->source = asciihexToNum(buf[i++])<<24;
    dp->source |= asciihexToNum(buf[i++])<<16;
    dp->source |= asciihexToNum(buf[i++])<<8;
    dp->source |= asciihexToNum(buf[i++]);

    if(buf[i] != ']')
        return PACKET_ERROR;
    return PACKET_DATA;
}
int strToStatusPacket(status_packet_t* sp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i=0;
    uint8_t len = SIZE_STATUS;
    if(buf[i++] != '[')
        return PACKET_ERROR;
    if(asciihexToNum(buf[i++]) != PACKET_STATUS)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len-1] != ']')
        return PACKET_ERROR;
    //copy the actual node_id, burst interval, interval type, history enable, burst enable
    sp->node_id = asciihexToNum(buf[i++])<<24;
    sp->node_id |= asciihexToNum(buf[i++])<<16;
    sp->node_id |= asciihexToNum(buf[i++])<<8;
    sp->node_id |= asciihexToNum(buf[i++]);
    sp->burstInterval = asciihexToNum(buf[i++])<<8;
    sp->burstInterval |= asciihexToNum(buf[i++]);
    sp->intervalType = asciihexToNum(buf[i++]);
    sp->historyEnable = buf[i++]&0x01;
    sp->burstEnable = buf[i++]&0x01;

    if(buf[i] != ']')
        return PACKET_ERROR;
    return PACKET_STATUS;
}
int getTypeOfPacket(char* buf)
{
    int len, type;
    if(buf[0]!='[')
        return PACKET_ERROR;
    if(buf[2]!=':')
        return PACKET_ERROR;
    switch( (type=asciihexToNum(buf[1])) )
    {
        case PACKET_COMMAND: len = SIZE_COMMAND; break;
        case PACKET_DATA: len = SIZE_DATA; break;
        case PACKET_STATUS: len = SIZE_STATUS; break;
        default: return PACKET_ERROR;
    }
    if(buf[len-1] != ']')
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
int dataPacketToStr(data_packet_t* dp, char* buf)
{
    uint8_t i=0;
    //header
    buf[i++]='[';
    buf[i++]=hexTable[PACKET_DATA];
    buf[i++]=':';
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
    uint8_t i=0;
    //header
    buf[i++]='[';
    buf[i++]=hexTable[PACKET_COMMAND];
    buf[i++]=':';
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
    uint8_t i=0;
    //header
    buf[i++]='[';
    buf[i++]=hexTable[PACKET_DATA];
    buf[i++]=':';
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