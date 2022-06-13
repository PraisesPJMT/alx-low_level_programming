#include <stdio.h>
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
		putchar(*(s + (count)));
	}
	putchar('\n');
}
