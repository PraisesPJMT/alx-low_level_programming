#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Integer number
 * @index: Given index number
 *
 * Return: Value of the bit at index
 *	(-1) if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
