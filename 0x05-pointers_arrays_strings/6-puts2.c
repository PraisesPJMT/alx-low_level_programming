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

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i += 2;
	}
	putchar('\n');
}
