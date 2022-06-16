#include "main.h"

/**
 * print_number - Prints number
 * @n: Integer to process.
 * Return: Nothing (void)
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
