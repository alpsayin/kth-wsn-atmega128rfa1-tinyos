
#include <stdio.h>
#include <inttypes.h>
#include "packet_types.h"


int strToCommandPacket(command_packet_t* cp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i=0;
    uint8_t len=SIZE_COMMAND;
    if(buf[i++] != '[')
        return PACKET_ERROR;
    if(ASCII2HEX(buf[i++]) != PACKET_COMMAND)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len - 1] != ']')
        return PACKET_ERROR;
    //copy the actual data flags, opcode, value, address
    cp->WE=buf[i++] != 0;
    cp->HE=buf[i++] != 0;
    cp->BE=buf[i++] != 0;
    cp->opcode=ASCII2HEX(buf[i++]) << 4;
    cp->opcode|=ASCII2HEX(buf[i++]);
    cp->value=ASCII2HEX(buf[i++]) << 4;
    cp->value|=ASCII2HEX(buf[i++]);
    cp->address=ASCII2HEX(buf[i++]) << 12;
    cp->address|=ASCII2HEX(buf[i++]) << 8;
    cp->address|=ASCII2HEX(buf[i++]) << 4;
    cp->address|=ASCII2HEX(buf[i++]);

    if(buf[i] != ']')
        return PACKET_ERROR;
    return PACKET_COMMAND;
}

int strToDataPacket(data_packet_t* dp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i=0;
    uint8_t len=SIZE_DATA;
    if(buf[i++] != '[')
        return PACKET_ERROR;
    if(ASCII2HEX(buf[i++]) != PACKET_DATA)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len - 1] != ']')
        return PACKET_ERROR;
    //copy the actual data flags, opcode, value, address
    dp->data1=ASCII2HEX(buf[i++]) << 12;
    dp->data1|=ASCII2HEX(buf[i++]) << 8;
    dp->data1|=ASCII2HEX(buf[i++]) << 4;
    dp->data1|=ASCII2HEX(buf[i++]);
    dp->data2=ASCII2HEX(buf[i++]) << 12;
    dp->data2|=ASCII2HEX(buf[i++]) << 8;
    dp->data2|=ASCII2HEX(buf[i++]) << 4;
    dp->data2|=ASCII2HEX(buf[i++]);
    dp->data3=ASCII2HEX(buf[i++]) << 12;
    dp->data3|=ASCII2HEX(buf[i++]) << 8;
    dp->data3|=ASCII2HEX(buf[i++]) << 4;
    dp->data3|=ASCII2HEX(buf[i++]);
    dp->data4=ASCII2HEX(buf[i++]) << 12;
    dp->data4|=ASCII2HEX(buf[i++]) << 8;
    dp->data4|=ASCII2HEX(buf[i++]) << 4;
    dp->data4|=ASCII2HEX(buf[i++]);
    dp->data5=ASCII2HEX(buf[i++]) << 12;
    dp->data5|=ASCII2HEX(buf[i++]) << 8;
    dp->data5|=ASCII2HEX(buf[i++]) << 4;
    dp->data5|=ASCII2HEX(buf[i++]);
    dp->source=ASCII2HEX(buf[i++]) << 12;
    dp->source|=ASCII2HEX(buf[i++]) << 8;
    dp->source|=ASCII2HEX(buf[i++]) << 4;
    dp->source|=ASCII2HEX(buf[i++]);
    dp->seqNo=ASCII2HEX(buf[i++]) << 12;
    dp->seqNo|=ASCII2HEX(buf[i++]) << 8;
    dp->seqNo|=ASCII2HEX(buf[i++]) << 4;
    dp->seqNo|=ASCII2HEX(buf[i++]);

    if(buf[i] != ']')
        return PACKET_ERROR;
    return PACKET_DATA;
}

int strToStatusPacket(status_packet_t* sp, char* buf)
{
    //TODO CHANGE THIS
    uint8_t i=0;
    uint8_t len=SIZE_STATUS;
    if(buf[i++] != '[')
        return PACKET_ERROR;
    if(ASCII2HEX(buf[i++]) != PACKET_STATUS)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len - 1] != ']')
        return PACKET_ERROR;
    //copy the actual node_id, burst interval, interval type, history enable, burst enable
    sp->node_id=ASCII2HEX(buf[i++]) << 12;
    sp->node_id|=ASCII2HEX(buf[i++]) << 8;
    sp->node_id|=ASCII2HEX(buf[i++]) << 4;
    sp->node_id|=ASCII2HEX(buf[i++]);
    sp->burstInterval=ASCII2HEX(buf[i++]) << 4;
    sp->burstInterval|=ASCII2HEX(buf[i++]);
    sp->intervalType=ASCII2HEX(buf[i++]);
    sp->historyEnable=buf[i++]&0x01;
    sp->burstEnable=buf[i++]&0x01;

    if(buf[i] != ']')
        return PACKET_ERROR;
    return PACKET_STATUS;
}

int getTypeOfPacket(char* buf)
{
    int len, type;
    if(buf[0] != '[')
        return PACKET_ERROR;
    if(buf[2] != ':')
        return PACKET_ERROR;
    switch((type=ASCII2HEX(buf[1])))
    {
        case PACKET_COMMAND: len=SIZE_COMMAND;
            break;
        case PACKET_DATA: len=SIZE_DATA;
            break;
        case PACKET_STATUS: len=SIZE_STATUS;
            break;
        default: return PACKET_ERROR;
    }
    if(buf[len - 1] != ']')
        return PACKET_ERROR;
    return type;
}

int dataPacketToStr(data_packet_t* dp, char* buf)
{
    uint8_t i=0;
    //header
    buf[i++]='[';
    buf[i++]=HEX2ASCII(PACKET_DATA);
    buf[i++]=':';
    //data
    buf[i++]=HEX2ASCII(HIGH((dp->data1) >> 8));
    buf[i++]=HEX2ASCII(LOW((dp->data1) >> 8));
    buf[i++]=HEX2ASCII(HIGH((dp->data1)));
    buf[i++]=HEX2ASCII(LOW((dp->data1)));
    buf[i++]=HEX2ASCII(HIGH((dp->data2) >> 8));
    buf[i++]=HEX2ASCII(LOW((dp->data2) >> 8));
    buf[i++]=HEX2ASCII(HIGH((dp->data2)));
    buf[i++]=HEX2ASCII(LOW((dp->data2)));
    buf[i++]=HEX2ASCII(HIGH((dp->data3) >> 8));
    buf[i++]=HEX2ASCII(LOW((dp->data3) >> 8));
    buf[i++]=HEX2ASCII(HIGH((dp->data3)));
    buf[i++]=HEX2ASCII(LOW((dp->data3)));
    buf[i++]=HEX2ASCII(HIGH((dp->data4) >> 8));
    buf[i++]=HEX2ASCII(LOW((dp->data4) >> 8));
    buf[i++]=HEX2ASCII(HIGH((dp->data4)));
    buf[i++]=HEX2ASCII(LOW((dp->data4)));
    buf[i++]=HEX2ASCII(HIGH((dp->data5) >> 8));
    buf[i++]=HEX2ASCII(LOW((dp->data5) >> 8));
    buf[i++]=HEX2ASCII(HIGH((dp->data5)));
    buf[i++]=HEX2ASCII(LOW((dp->data5)));
    buf[i++]=HEX2ASCII(HIGH((dp->source) >> 8));
    buf[i++]=HEX2ASCII(LOW((dp->source) >> 8));
    buf[i++]=HEX2ASCII(HIGH((dp->source)));
    buf[i++]=HEX2ASCII(LOW((dp->source)));
    buf[i++]=HEX2ASCII(HIGH((dp->seqNo) >> 8));
    buf[i++]=HEX2ASCII(LOW((dp->seqNo) >> 8));
    buf[i++]=HEX2ASCII(HIGH((dp->seqNo)));
    buf[i++]=HEX2ASCII(LOW((dp->seqNo)));
    //footer
    buf[i++]=']';
    buf[i]=0;
    return i;
}

int commandPacketToStr(command_packet_t* cp, char* buf)
{
    uint8_t i=0;
    //header
    buf[i++]='[';
    buf[i++]=HEX2ASCII(PACKET_COMMAND);
    buf[i++]=':';
    //data
    buf[i++]=HEX2ASCII(cp->WE);
    buf[i++]=HEX2ASCII(cp->HE);
    buf[i++]=HEX2ASCII(cp->BE);
    buf[i++]=HEX2ASCII(HIGH((cp->opcode)));
    buf[i++]=HEX2ASCII(LOW((cp->opcode)));
    buf[i++]=HEX2ASCII(HIGH((cp->value)));
    buf[i++]=HEX2ASCII(LOW((cp->value)));
    buf[i++]=HEX2ASCII(HIGH((cp->address) >> 8));
    buf[i++]=HEX2ASCII(LOW((cp->address) >> 8));
    buf[i++]=HEX2ASCII(HIGH((cp->address)));
    buf[i++]=HEX2ASCII(LOW((cp->address)));
    //footer
    buf[i++]=']';
    buf[i]=0;
    return i;
}

int statusPacketToStr(status_packet_t* sp, char* buf)
{
    uint8_t i=0;
    //header
    buf[i++]='[';
    buf[i++]=HEX2ASCII(PACKET_STATUS);
    buf[i++]=':';
    //data
    buf[i++]=HEX2ASCII(HIGH((sp->node_id) >> 8));
    buf[i++]=HEX2ASCII(LOW((sp->node_id) >> 8));
    buf[i++]=HEX2ASCII(HIGH((sp->node_id)));
    buf[i++]=HEX2ASCII(LOW((sp->node_id)));
    buf[i++]=HEX2ASCII(HIGH((sp->burstInterval)));
    buf[i++]=HEX2ASCII(LOW((sp->burstInterval)));
    buf[i++]=HEX2ASCII(sp->intervalType);
    buf[i++]=HEX2ASCII(sp->historyEnable);
    buf[i++]=HEX2ASCII(sp->burstEnable);
    //footer
    buf[i++]=']';
    buf[i]=0;
    return i;
}