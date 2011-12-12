
/* 
 * File:   packet_types.h
 * Author: alpsayin
 *
 * Created on December 2, 2011, 12:08 AM
 */

#include "packet_types.h"

generic module PacketTypesP()
{
	provides interface PacketTypes;
}
implementation
{
	async command uint8_t PacketTypes.strToCommandPacket(command_packet_t* cp, uint8_t* buf)
	{
	    uint8_t i=0;
	    uint8_t len = SIZE_COMMAND;
	    if(buf[i++] != '[')
	        return PACKET_ERROR;
	    if( ascii2hex(buf[i++]) != PACKET_COMMAND)
	        return PACKET_ERROR;
	    if(buf[i++] != ':')
	        return PACKET_ERROR;
	    if(buf[len-1] != ']')
	        return PACKET_ERROR;
	    //copy the actual data flags, opcode, value, address
	    cp->WE = buf[i++]!='0';
	    cp->HE = buf[i++]!='0';
	    cp->BE = buf[i++]!='0';
	    cp->opcode = ascii2hex(buf[i++])<<4;
	    cp->opcode |= ascii2hex(buf[i++]);
	    cp->value = ascii2hex(buf[i++])<<4;
	    cp->value |= ascii2hex(buf[i++]);
	    cp->address = ascii2hex(buf[i++])<<12;
	    cp->address |= ascii2hex(buf[i++])<<8;
	    cp->address |= ascii2hex(buf[i++])<<4;
	    cp->address |= ascii2hex(buf[i++]); 
	
	    if(buf[i] != ']')
	        return PACKET_ERROR;
	    return PACKET_COMMAND;
	}
	async command uint8_t PacketTypes.strToDataPacket(data_packet_t* dp, uint8_t* buf)
	{
	    //TODO CHANGE THIS
	    uint8_t i=0;
	    uint8_t len = SIZE_DATA;
	    if(buf[i++] != '[')
	        return PACKET_ERROR;
	    if( ascii2hex(buf[i++]) != PACKET_DATA)
	        return PACKET_ERROR;
	    if(buf[i++] != ':')
	        return PACKET_ERROR;
	    if(buf[len-1] != ']')
	        return PACKET_ERROR;
	    //copy the actual data flags, opcode, value, address
	    dp->data1 = ascii2hex(buf[i++])<<12;
	    dp->data1 |= ascii2hex(buf[i++])<<8;
	    dp->data1 |= ascii2hex(buf[i++])<<4;
	    dp->data1 |= ascii2hex(buf[i++]);
	    dp->data2 = ascii2hex(buf[i++])<<12;
	    dp->data2 |= ascii2hex(buf[i++])<<8;
	    dp->data2 |= ascii2hex(buf[i++])<<4;
	    dp->data2 |= ascii2hex(buf[i++]);
	    dp->data3 = ascii2hex(buf[i++])<<12;
	    dp->data3 |= ascii2hex(buf[i++])<<8;
	    dp->data3 |= ascii2hex(buf[i++])<<4;
	    dp->data3 |= ascii2hex(buf[i++]);
	    dp->data4 = ascii2hex(buf[i++])<<12;
	    dp->data4 |= ascii2hex(buf[i++])<<8;
	    dp->data4 |= ascii2hex(buf[i++])<<4;
	    dp->data4 |= ascii2hex(buf[i++]);
	    dp->data5 = ascii2hex(buf[i++])<<12;
	    dp->data5 |= ascii2hex(buf[i++])<<8;
	    dp->data5 |= ascii2hex(buf[i++])<<4;
	    dp->data5 |= ascii2hex(buf[i++]);
	    dp->source = ascii2hex(buf[i++])<<12;
	    dp->source |= ascii2hex(buf[i++])<<8;
	    dp->source |= ascii2hex(buf[i++])<<4;
	    dp->source |= ascii2hex(buf[i++]);
	    dp->seqNo = ascii2hex(buf[i++])<<12;
	    dp->seqNo |= ascii2hex(buf[i++])<<8;
	    dp->seqNo |= ascii2hex(buf[i++])<<4;
	    dp->seqNo |= ascii2hex(buf[i++]);
	
	    if(buf[i] != ']')
	        return PACKET_ERROR;
	    return PACKET_DATA;
	}
	async command uint8_t PacketTypes.strToStatusPacket(status_packet_t* sp, uint8_t* buf)
	{
	    //TODO CHANGE THIS
	    uint8_t i=0;
	    uint8_t len = SIZE_STATUS;
	    if(buf[i++] != '[')
	        return PACKET_ERROR;
	    if(ascii2hex(buf[i++]) != PACKET_STATUS)
	        return PACKET_ERROR;
	    if(buf[i++] != ':')
	        return PACKET_ERROR;
	    if(buf[len-1] != ']')
	        return PACKET_ERROR;
	    //copy the actual node_id, burst interval, interval type, history enable, burst enable
	    sp->node_id = ascii2hex(buf[i++])<<12;
	    sp->node_id |= ascii2hex(buf[i++])<<8;
	    sp->node_id |= ascii2hex(buf[i++])<<4;
	    sp->node_id |= ascii2hex(buf[i++]);
	    sp->burstInterval = ascii2hex(buf[i++])<<4;
	    sp->burstInterval |= ascii2hex(buf[i++]);
	    sp->intervalType = ascii2hex(buf[i++]);
	    sp->historyEnable = buf[i++]&0x01;
	    sp->burstEnable = buf[i++]&0x01;
	
	    if(buf[i] != ']')
	        return PACKET_ERROR;
	    return PACKET_STATUS;
	}
	async command uint8_t PacketTypes.getTypeOfPacket(uint8_t* buf)
	{
	    int len, type;
	    if(buf[0]!='[')
	        return PACKET_ERROR;
	    if(buf[2]!=':')
	        return PACKET_ERROR;
	    switch( (type=ascii2hex(buf[1])) )
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
	async command uint8_t PacketTypes.dataPacketToStr(data_packet_t* dp, uint8_t* buf)
	{
	    uint8_t i=0;
	    //header
	    buf[i++]='[';
	    buf[i++]=hex2ascii(PACKET_DATA);
	    buf[i++]=':';
	    //data
	    buf[i++] = hex2ascii(HIGH((dp->data1)>>8));
	    buf[i++] = hex2ascii(LOW((dp->data1)>>8));
	    buf[i++] = hex2ascii(HIGH((dp->data1)));
	    buf[i++] = hex2ascii(LOW((dp->data1)));
	    buf[i++] = hex2ascii(HIGH((dp->data2)>>8));
	    buf[i++] = hex2ascii(LOW((dp->data2)>>8));
	    buf[i++] = hex2ascii(HIGH((dp->data2)));
	    buf[i++] = hex2ascii(LOW((dp->data2)));
	    buf[i++] = hex2ascii(HIGH((dp->data3)>>8));
	    buf[i++] = hex2ascii(LOW((dp->data3)>>8));
	    buf[i++] = hex2ascii(HIGH((dp->data3)));
	    buf[i++] = hex2ascii(LOW((dp->data3)));
	    buf[i++] = hex2ascii(HIGH((dp->data4)>>8));
	    buf[i++] = hex2ascii(LOW((dp->data4)>>8));
	    buf[i++] = hex2ascii(HIGH((dp->data4)));
	    buf[i++] = hex2ascii(LOW((dp->data4)));
	    buf[i++] = hex2ascii(HIGH((dp->data5)>>8));
	    buf[i++] = hex2ascii(LOW((dp->data5)>>8));
	    buf[i++] = hex2ascii(HIGH((dp->data5)));
	    buf[i++] = hex2ascii(LOW((dp->data5)));
	    buf[i++] = hex2ascii(HIGH((dp->source)>>8));
	    buf[i++] = hex2ascii(LOW((dp->source)>>8));
	    buf[i++] = hex2ascii(HIGH((dp->source)));
	    buf[i++] = hex2ascii(LOW((dp->source)));
	    buf[i++] = hex2ascii(HIGH((dp->seqNo)>>8));
	    buf[i++] = hex2ascii(LOW((dp->seqNo)>>8));
	    buf[i++] = hex2ascii(HIGH((dp->seqNo)));
	    buf[i++] = hex2ascii(LOW((dp->seqNo)));
	    //footer
	    buf[i++] = ']';
	    buf[i] = 0;
	    return i;
	}
	async command uint8_t PacketTypes.commandPacketToStr(command_packet_t* cp, uint8_t* buf)
	{
	    uint8_t i=0;
	    //header
	    buf[i++]='[';
	    buf[i++]=hex2ascii(PACKET_COMMAND);
	    buf[i++]=':';
	    //data
	    buf[i++] = hex2ascii(cp->WE);
	    buf[i++] = hex2ascii(cp->HE);
	    buf[i++] = hex2ascii(cp->BE);
	    buf[i++] = hex2ascii(HIGH((cp->opcode)));
	    buf[i++] = hex2ascii(LOW((cp->opcode)));
	    buf[i++] = hex2ascii(HIGH((cp->value)));
	    buf[i++] = hex2ascii(LOW((cp->value)));
	    buf[i++] = hex2ascii(HIGH((cp->address)>>8));
	    buf[i++] = hex2ascii(LOW((cp->address)>>8));
	    buf[i++] = hex2ascii(HIGH((cp->address)));
	    buf[i++] = hex2ascii(LOW((cp->address)));
	    //footer
	    buf[i++] = ']';
	    buf[i] = 0;
	    return i;
	}
	async command uint8_t PacketTypes.statusPacketToStr(status_packet_t* sp, uint8_t* buf)
	{
	    uint8_t i=0;
	    //header
	    buf[i++]='[';
	    buf[i++]=hex2ascii(PACKET_STATUS);
	    buf[i++]=':';
	    //data
	    buf[i++] = hex2ascii(HIGH((sp->node_id)>>8));
	    buf[i++] = hex2ascii(LOW((sp->node_id)>>8));
	    buf[i++] = hex2ascii(HIGH((sp->node_id)));
	    buf[i++] = hex2ascii(LOW((sp->node_id)));
	    buf[i++] = hex2ascii(HIGH((sp->burstInterval)));
	    buf[i++] = hex2ascii(LOW((sp->burstInterval)));
	    buf[i++] = hex2ascii(sp->intervalType);
	    buf[i++] = hex2ascii(sp->historyEnable);
	    buf[i++] = hex2ascii(sp->burstEnable);
	    //footer
	    buf[i++] = ']';
	    buf[i] = 0;
	    return i;
	}
}