/*
 * structures.h
 *
 *  Created on: Nov 6, 2012
 *      Author: gary
 */

#ifndef STRUCTURES_H_
#define STRUCTURES_H_

typedef enum Bool
{
	false, true
} bool;

typedef struct ip_addr
{
	uint8_t octet_1;
	uint8_t octet_2;
	uint8_t octet_3;
	uint8_t octet_4;
} IPADDR;

typedef struct udp_header
{
	uint16_t source_port;
	uint16_t dest_port;
	uint16_t length;
	uint16_t checksum;
} UDPH;

typedef struct control_message
{

};

#endif /* STRUCTURES_H_ */
