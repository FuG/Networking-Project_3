/*
 * command_process.c
 *
 *  Created on: Nov 3, 2012
 *      Author: gary
 */

#include "cmd_proc.h"

bool check_params(int argc, char **argv)
{
	char *nodeA = argv[1];
	char *nodeB = argv[2];
	char *code = argv[3];
	char *weight = argv[4];

	// check 'code'
	if (strcmp(code, "0x01") && strcmp(code, "0x02") && strcmp(code, "0x03")
			&& strcmp(code, "0x04") && strcmp(code, "0x05"))
	{
		printf("ERROR: Valid code values are:\n");
		printf("\t0x01\t- Link Up\n");
		printf("\t0x02\t- Link Change\n");
		printf("\t0x03\t- Link Down\n");
		printf("\t0x04\t- Die\n");
		printf("\t0x05\t- Print routing table\n");
		return false;
	}

	return true;
}

void form_message(char **argv)
{
	char *ip;
	char *nodeA = argv[1];
	char *nodeB = argv[2];
	char *code = argv[3];
	char *weight = argv[4];
	char udpHeader[8] = {0};
	char message[20] = {0};
	UDPH udph;

	// form udp header
	udph.source_port = 9000;
	udph.dest_port = 1111;
	udph.length = 20;
	udph.checksum = calc_checksum(udph);

	// form final message

}

uint16_t calc_checksum(UDPH *udph)
{
	return (udph->source_port + udph->dest_port + udph->length);
}
