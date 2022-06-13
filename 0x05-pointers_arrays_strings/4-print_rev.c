#include "main.h"

/**
  * print_rev - Reverses strin s
  * @s: Input string
  * Return: Zero (Nothing)
  */
void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}
