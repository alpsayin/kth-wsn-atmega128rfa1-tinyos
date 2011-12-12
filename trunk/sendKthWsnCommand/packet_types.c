
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
    if(ascii2hex(buf[i++]) != PACKET_COMMAND)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len - 1] != ']')
        return PACKET_ERROR;
    //copy the actual data flags, opcode, value, address
    cp->WE=buf[i++] != 0;
    cp->HE=buf[i++] != 0;
    cp->BE=buf[i++] != 0;
    cp->opcode=ascii2hex(buf[i++]) << 4;
    cp->opcode|=ascii2hex(buf[i++]);
    cp->value=ascii2hex(buf[i++]) << 4;
    cp->value|=ascii2hex(buf[i++]);
    cp->address=ascii2hex(buf[i++]) << 12;
    cp->address|=ascii2hex(buf[i++]) << 8;
    cp->address|=ascii2hex(buf[i++]) << 4;
    cp->address|=ascii2hex(buf[i++]);

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
    if(ascii2hex(buf[i++]) != PACKET_DATA)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len - 1] != ']')
        return PACKET_ERROR;
    //copy the actual data flags, opcode, value, address
    dp->data1=ascii2hex(buf[i++]) << 12;
    dp->data1|=ascii2hex(buf[i++]) << 8;
    dp->data1|=ascii2hex(buf[i++]) << 4;
    dp->data1|=ascii2hex(buf[i++]);
    dp->data2=ascii2hex(buf[i++]) << 12;
    dp->data2|=ascii2hex(buf[i++]) << 8;
    dp->data2|=ascii2hex(buf[i++]) << 4;
    dp->data2|=ascii2hex(buf[i++]);
    dp->data3=ascii2hex(buf[i++]) << 12;
    dp->data3|=ascii2hex(buf[i++]) << 8;
    dp->data3|=ascii2hex(buf[i++]) << 4;
    dp->data3|=ascii2hex(buf[i++]);
    dp->data4=ascii2hex(buf[i++]) << 12;
    dp->data4|=ascii2hex(buf[i++]) << 8;
    dp->data4|=ascii2hex(buf[i++]) << 4;
    dp->data4|=ascii2hex(buf[i++]);
    dp->data5=ascii2hex(buf[i++]) << 12;
    dp->data5|=ascii2hex(buf[i++]) << 8;
    dp->data5|=ascii2hex(buf[i++]) << 4;
    dp->data5|=ascii2hex(buf[i++]);
    dp->source=ascii2hex(buf[i++]) << 12;
    dp->source|=ascii2hex(buf[i++]) << 8;
    dp->source|=ascii2hex(buf[i++]) << 4;
    dp->source|=ascii2hex(buf[i++]);
    dp->seqNo=ascii2hex(buf[i++]) << 12;
    dp->seqNo|=ascii2hex(buf[i++]) << 8;
    dp->seqNo|=ascii2hex(buf[i++]) << 4;
    dp->seqNo|=ascii2hex(buf[i++]);

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
    if(ascii2hex(buf[i++]) != PACKET_STATUS)
        return PACKET_ERROR;
    if(buf[i++] != ':')
        return PACKET_ERROR;
    if(buf[len - 1] != ']')
        return PACKET_ERROR;
    //copy the actual node_id, burst interval, interval type, history enable, burst enable
    sp->node_id=ascii2hex(buf[i++]) << 12;
    sp->node_id|=ascii2hex(buf[i++]) << 8;
    sp->node_id|=ascii2hex(buf[i++]) << 4;
    sp->node_id|=ascii2hex(buf[i++]);
    sp->burstInterval=ascii2hex(buf[i++]) << 4;
    sp->burstInterval|=ascii2hex(buf[i++]);
    sp->intervalType=ascii2hex(buf[i++]);
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
    switch((type=ascii2hex(buf[1])))
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
    buf[i++]=hex2ascii(PACKET_DATA);
    buf[i++]=':';
    //data
    buf[i++]=hex2ascii(HIGH((dp->data1) >> 8));
    buf[i++]=hex2ascii(LOW((dp->data1) >> 8));
    buf[i++]=hex2ascii(HIGH((dp->data1)));
    buf[i++]=hex2ascii(LOW((dp->data1)));
    buf[i++]=hex2ascii(HIGH((dp->data2) >> 8));
    buf[i++]=hex2ascii(LOW((dp->data2) >> 8));
    buf[i++]=hex2ascii(HIGH((dp->data2)));
    buf[i++]=hex2ascii(LOW((dp->data2)));
    buf[i++]=hex2ascii(HIGH((dp->data3) >> 8));
    buf[i++]=hex2ascii(LOW((dp->data3) >> 8));
    buf[i++]=hex2ascii(HIGH((dp->data3)));
    buf[i++]=hex2ascii(LOW((dp->data3)));
    buf[i++]=hex2ascii(HIGH((dp->data4) >> 8));
    buf[i++]=hex2ascii(LOW((dp->data4) >> 8));
    buf[i++]=hex2ascii(HIGH((dp->data4)));
    buf[i++]=hex2ascii(LOW((dp->data4)));
    buf[i++]=hex2ascii(HIGH((dp->data5) >> 8));
    buf[i++]=hex2ascii(LOW((dp->data5) >> 8));
    buf[i++]=hex2ascii(HIGH((dp->data5)));
    buf[i++]=hex2ascii(LOW((dp->data5)));
    buf[i++]=hex2ascii(HIGH((dp->source) >> 8));
    buf[i++]=hex2ascii(LOW((dp->source) >> 8));
    buf[i++]=hex2ascii(HIGH((dp->source)));
    buf[i++]=hex2ascii(LOW((dp->source)));
    buf[i++]=hex2ascii(HIGH((dp->seqNo) >> 8));
    buf[i++]=hex2ascii(LOW((dp->seqNo) >> 8));
    buf[i++]=hex2ascii(HIGH((dp->seqNo)));
    buf[i++]=hex2ascii(LOW((dp->seqNo)));
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
    buf[i++]=hex2ascii(PACKET_COMMAND);
    buf[i++]=':';
    //data
    buf[i++]=hex2ascii(cp->WE);
    buf[i++]=hex2ascii(cp->HE);
    buf[i++]=hex2ascii(cp->BE);
    buf[i++]=hex2ascii(HIGH((cp->opcode)));
    buf[i++]=hex2ascii(LOW((cp->opcode)));
    buf[i++]=hex2ascii(HIGH((cp->value)));
    buf[i++]=hex2ascii(LOW((cp->value)));
    buf[i++]=hex2ascii(HIGH((cp->address) >> 8));
    buf[i++]=hex2ascii(LOW((cp->address) >> 8));
    buf[i++]=hex2ascii(HIGH((cp->address)));
    buf[i++]=hex2ascii(LOW((cp->address)));
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
    buf[i++]=hex2ascii(PACKET_STATUS);
    buf[i++]=':';
    //data
    buf[i++]=hex2ascii(HIGH((sp->node_id) >> 8));
    buf[i++]=hex2ascii(LOW((sp->node_id) >> 8));
    buf[i++]=hex2ascii(HIGH((sp->node_id)));
    buf[i++]=hex2ascii(LOW((sp->node_id)));
    buf[i++]=hex2ascii(HIGH((sp->burstInterval)));
    buf[i++]=hex2ascii(LOW((sp->burstInterval)));
    buf[i++]=hex2ascii(sp->intervalType);
    buf[i++]=hex2ascii(sp->historyEnable);
    buf[i++]=hex2ascii(sp->burstEnable);
    //footer
    buf[i++]=']';
    buf[i]=0;
    return i;
}

int dataPacketTohistoryPacket(data_packet_t* dp, history_packet_t* hp)
{
    hp->seqNo=dp->seqNo;
    hp->source=dp->source;
    hp->data1H=dp->data1 >> 8;
    hp->data1L=dp->data1 & 0xFF;
    hp->data2H=dp->data1 >> 8;
    hp->data2L=dp->data1 & 0xFF;
    hp->data3H=dp->data1 >> 8;
    hp->data3L=dp->data1 & 0xFF;
    hp->data4H=dp->data1 >> 8;
    hp->data4L=dp->data1 & 0xFF;
    hp->data5H=dp->data1 >> 8;
    hp->data5L=dp->data1 & 0xFF;
    return 0;
}

int historyPacketToDataPacket(data_packet_t* dp, history_packet_t* hp)
{
    dp->seqNo=hp->seqNo;
    dp->source=hp->source;
    dp->data1=hp->data1H << 8 | hp->data1L;
    dp->data2=hp->data2H << 8 | hp->data2L;
    dp->data3=hp->data3H << 8 | hp->data3L;
    dp->data4=hp->data4H << 8 | hp->data4L;
    dp->data5=hp->data5H << 8 | hp->data5L;
    return 0;
}