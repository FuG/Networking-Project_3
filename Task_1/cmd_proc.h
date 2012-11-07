/*
 * cmd_proc.h
 *
 *  Created on: Nov 3, 2012
 *      Author: gary
 */

#ifndef CMD_PROC_H_
#define CMD_PROC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>
#include "structures.h"

#define PORT 1111

bool check_params(int argc, char **argv);
void form_message(char **argv);
int calc_checksum(UDPH *udph);

#endif /* CMD_PROC_H_ */
