
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
	
	uint8_t hexTable[16] = "0123456789abcdef";
	
	async command uint8_t PacketTypes.asciihexToNum(uint8_t c)
	{
	    if(c>='a' && c<='z')
	        return (uint8_t)(c-'a'+10);
	    if(c>='A' && c<='Z')
	        return (uint8_t)(c-'A'+10);
	    if(c>='0' && c<='9')
	        return (uint8_t)(c-'0');
	    return 0;
	}
	async command uint8_t PacketTypes.strToCommandPacket(command_packet_t* cp, uint8_t* buf)
	{
	    //TODO CHANGE THIS
	    uint8_t i=0;
	    uint8_t len = SIZE_COMMAND;
	    if(buf[i++] != '[')
	        return PACKET_ERROR;
	    if( call PacketTypes.asciihexToNum(buf[i++]) != PACKET_COMMAND)
	        return PACKET_ERROR;
	    if(buf[i++] != ':')
	        return PACKET_ERROR;
	    if(buf[len-1] != ']')
	        return PACKET_ERROR;
	    //copy the actual data flags, opcode, value, address
	    cp->WE = buf[i++]!=0;
	    cp->HE = buf[i++]!=0;
	    cp->BE = buf[i++]!=0;
	    cp->opcode = call PacketTypes.asciihexToNum(buf[i++])<<4;
	    cp->opcode |= call PacketTypes.asciihexToNum(buf[i++]);
	    cp->value = call PacketTypes.asciihexToNum(buf[i++])<<4;
	    cp->value |= call PacketTypes.asciihexToNum(buf[i++]);
	    cp->address = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    cp->address |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    cp->address |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    cp->address |= call PacketTypes.asciihexToNum(buf[i++]);
	
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
	    if( call PacketTypes.asciihexToNum(buf[i++]) != PACKET_DATA)
	        return PACKET_ERROR;
	    if(buf[i++] != ':')
	        return PACKET_ERROR;
	    if(buf[len-1] != ']')
	        return PACKET_ERROR;
	    //copy the actual data flags, opcode, value, address
	    dp->data1 = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    dp->data1 |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    dp->data1 |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    dp->data1 |= call PacketTypes.asciihexToNum(buf[i++]);
	    dp->data2 = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    dp->data2 |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    dp->data2 |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    dp->data2 |= call PacketTypes.asciihexToNum(buf[i++]);
	    dp->data3 = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    dp->data3 |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    dp->data3 |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    dp->data3 |= call PacketTypes.asciihexToNum(buf[i++]);
	    dp->data4 = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    dp->data4 |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    dp->data4 |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    dp->data4 |= call PacketTypes.asciihexToNum(buf[i++]);
	    dp->data5 = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    dp->data5 |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    dp->data5 |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    dp->data5 |= call PacketTypes.asciihexToNum(buf[i++]);
	    dp->source = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    dp->source |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    dp->source |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    dp->source |= call PacketTypes.asciihexToNum(buf[i++]);
	    dp->seqNo = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    dp->seqNo |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    dp->seqNo |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    dp->seqNo |= call PacketTypes.asciihexToNum(buf[i++]);
	
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
	    if(call PacketTypes.asciihexToNum(buf[i++]) != PACKET_STATUS)
	        return PACKET_ERROR;
	    if(buf[i++] != ':')
	        return PACKET_ERROR;
	    if(buf[len-1] != ']')
	        return PACKET_ERROR;
	    //copy the actual node_id, burst interval, interval type, history enable, burst enable
	    sp->node_id = call PacketTypes.asciihexToNum(buf[i++])<<12;
	    sp->node_id |= call PacketTypes.asciihexToNum(buf[i++])<<8;
	    sp->node_id |= call PacketTypes.asciihexToNum(buf[i++])<<4;
	    sp->node_id |= call PacketTypes.asciihexToNum(buf[i++]);
	    sp->burstInterval = call PacketTypes.asciihexToNum(buf[i++])<<4;
	    sp->burstInterval |= call PacketTypes.asciihexToNum(buf[i++]);
	    sp->intervalType = call PacketTypes.asciihexToNum(buf[i++]);
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
	    switch( (type=call PacketTypes.asciihexToNum(buf[1])) )
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
	    buf[i++] = hexTable[HIGH((dp->seqNo)>>8)];
	    buf[i++] = hexTable[LOW((dp->seqNo)>>8)];
	    buf[i++] = hexTable[HIGH((dp->seqNo))];
	    buf[i++] = hexTable[LOW((dp->seqNo))];
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
	async command uint8_t PacketTypes.statusPacketToStr(status_packet_t* sp, uint8_t* buf)
	{
	    uint8_t i=0;
	    //header
	    buf[i++]='[';
	    buf[i++]=hexTable[PACKET_STATUS];
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
}