#include <stdio.h>
#include "main.h"

/**
  * puts_half - Prints second half of a string str
  * @str: Input string
  * Return: void (Nothing)
  */
void puts_half(char *str)
{
	int len = 0, half;

	while (*(str + len) != '\0')
		len++;
	if (!(len % 2))
		half = len / 2;
	else
		half = (len + 1) / 2;

	while (*(str + half) != '\0')
	{
		putchar(*(str + half));
		half++;
	}
	putchar('\n');
}
