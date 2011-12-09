//
//
//  ArrayPipe.nc
//
//  aa
//
//  Invited by Tian Junzhe on 12/9/11.
//  Copyright 2011 KTH. All rights reserved.
//
//	zn
//
//

interface ArrayPipe<data_type>{

	/******************************************************
	 * send an array of data_type items
	 * 
	 * val: the base address of this array
	 * len: the number of items in this array
	 * 
	 * return SUCCESS after finish using the array
	 * any problems, return other error_t types
	 *****************************************************/
	command error_t sendArray(data_type* val, uint8_t len);

	/******************************************************
	 * get an array of data_type items, require function
	 * should provide the data buffer
	 * 
	 * val: the base address of buffer
	 * len: the maxim length of the buffer
	 * 
	 * return value in[0,len) indicating how many
	 * items have been stored in buffer 'val'.
	 * 
	 * return 'len' indicating need more array space
	 * 
	 * WARNING: store items continuously and begin from '0'
	 *****************************************************/
	command uint8_t getArray(data_type* val, uint8_t len);

}