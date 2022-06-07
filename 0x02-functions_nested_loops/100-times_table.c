#include "main.h"

/**
  * print_times_table - prints the times table for n
  * @n: Input integer
  * Return: Zero 0
  */
void print_times_table(int n)
{
	int row, col, num;

	if (!((n > 15) || (n < 0)))
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				num = (row * col);
				if (col != 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (num < 10 && col != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((num % 10) + '0');
				}
				else if (num >= 10 && num < 100)
				{
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else if (num >= 100 && col != 0)
				{
					_putchar((num / 100) + '0');
					_putchar((num / 10) % 10 + '0');
					_putchar((num % 10) + '0');
				}
				else
					_putchar((num % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
