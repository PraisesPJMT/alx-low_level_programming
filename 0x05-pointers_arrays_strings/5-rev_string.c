#include <stdio.h>
#include "main.h"

/**
  * rev_string - Reverses the string s
  * @s: Input string
  * Return: void (Nothing)
  */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
