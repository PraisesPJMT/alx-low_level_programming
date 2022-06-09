#include "main.h"

/**
 * print_line - Draws straight line in the terminal
 * @n: Input integer
 * Description: use _putshar
 *		if n<=0, print \n
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
