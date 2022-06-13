#include <stdio.h>
#include "main.h"

/**
  * puts2 - Prints every other character of a string s
  * @str: Input string
  * Return: void (Nothing)
  */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + i));
		putchar('\n');
		i += 2;
	}
}
