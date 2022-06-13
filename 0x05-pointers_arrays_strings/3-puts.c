#include "main.h"

/**
 * _puts - Prints the string *str
 * @str: Input string
 * Return: void (Nothing)
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
