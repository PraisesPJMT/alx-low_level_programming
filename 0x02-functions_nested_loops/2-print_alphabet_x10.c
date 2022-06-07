#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * return void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char str;

		for (str = 'a'; str <= 'z'; str++)
			_putchar(str);
		_putchar('\n');
		i++;
	}
}
