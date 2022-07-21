#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 *	to flip to get from one number to another
 * @n: First integer number
 * @m: Second integer number
 *
 * Return: Number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipNum = 0, comparatorA, comparatorB;

	while (!(n == 0 && m == 0))
	{
		comparatorA = n & 1;
		comparatorB = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comparatorA != comparatorB)
		{
			flipNum += 1;
		}
	}
	return (flipNum);
}
