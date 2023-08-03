#include "main.h"

/**
 * get_endianness - to check if a machine is little endian
 * or big endian
 * Return: 1 for little endian 
 * and 0 for big endian
 */

int get_endianness(void)
{

	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);

}

