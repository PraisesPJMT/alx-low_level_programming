#include "main.h"

/**
  * more_numbers - Prints 10 time from 0-14
  * Description: Only use _putchar three times
  * Return: Void
  */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
