#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Integer number to be printed in binary form
 *
 * Return: Nothing (void)
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar ('1');
		return;
	}
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
