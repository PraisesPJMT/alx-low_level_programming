#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: Input character
  * Return: zero (Nothing)
  */
int _strlen(char *s);
{
	int i;

	i = 0;
	while (*(s + 1))
		i++;
	return (i);
}
