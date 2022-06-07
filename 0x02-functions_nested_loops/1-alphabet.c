#include "main.h"

/**
 * print_alphabet - prints alphabets 10 times
 * returns 0 if successful.
 */
void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		_putchar(str);
	_putchar('\n');
}
