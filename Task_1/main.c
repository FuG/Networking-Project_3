/*
 * main.c
 *
 *  Created on: Nov 3, 2012
 *      Author: gary
 */

#include "cmd_proc.h"

int main(int argc, char **argv)
{
	if (argc != 5) {
		printf("ERROR: incorrect number of parameters.");
		printf("usage: ./cmd_proc <NodeA> <NodeB> <code> <weight>\n");
		exit(0);
	}

	if (!check_params(argc, argv)) {
		exit(0);
	}



	return 0;
}
