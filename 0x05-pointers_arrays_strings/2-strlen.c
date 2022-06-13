#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: Input character
  * Return: zero (Nothing)
  */
int _strlen(char *s)
{
	int i;

	while (*(s + 1))
		i++;
	return (i);
}
