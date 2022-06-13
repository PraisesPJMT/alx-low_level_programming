#include "main.h"

/**
  * _puts - Prints the string *str 
  * @str: Input string
  * Return: void (Nothing)
  */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
