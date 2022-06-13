#include <stdio.h>
#include "main.h"

/**
  * print_rev - Reverses strin s
  * @s: Input string
  * Return: Zero (Nothing)
  */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
