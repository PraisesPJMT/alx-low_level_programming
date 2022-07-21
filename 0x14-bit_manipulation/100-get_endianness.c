#include "main.h"

/**
 * get_endianness - Checks endianness
 *
 * Return: (0) if big endian
 *	(1) if little endian
 */
int get_endianness(void)
{
	unsigned int endian = 1;
	char *c = (char *) &endian;

	return ((int)*c);
}
