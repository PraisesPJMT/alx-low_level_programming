#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to integer value
 * @index: Index of bit to be changed
 *
 * Return: (1) if it worked
 *	(-1) if ian error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int adder;

	if (index > 63)
	{
		return (-1);
	}
	adder = 1 << index;
	*n = *n & (~adder);
	return (1);
}
