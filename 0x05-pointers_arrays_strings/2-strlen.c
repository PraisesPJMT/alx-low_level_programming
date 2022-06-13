#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: Input character
  * Return: zero (Nothing)
  */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
