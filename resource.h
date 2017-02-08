/*
 * resource.h
 *
 *  Created on: Feb 8, 2017
 *      Author: hue
 */

#ifndef RESOURCE_H_
#define RESOURCE_H_

struct Resource
{
	char * name;
	char * usb_at_port;
	char * usb_modem_port;
	char * uart_port;

	// Identify
	char * serial_number;
	char * firmware_version;
	char * product_name;
	char * sim_name;
	char * sim_ccid;

	// Configuration file
	char * config_file;

	struct Resource * next;
};

struct Resource * CreateEmptyResource(void);
struct Resource * CreateResourceFromFile(const char * file_name);
int EmptyResource(struct Resource * res);

#endif /* RESOURCE_H_ */
