#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatnates two strings s1 and s2
 * @s1: First string to concatenate
 * @s2: Second string to concatnate
 * Return: Pointer to newly allocated mem containing conc. strings
 *	Null if insufficient memory was available
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1len, s2len;
	char *newLoc;

	s1len = s2len = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2len++;
	}
	newLoc = malloc(sizeof(char) * (s1len + s2len + 1));
	if (newLoc == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (s1len + s2len); i++)
	{
		if (i < s1len)
		{
			newLoc[i] = s1[i];
		}
		else
		{
			newLoc[i] = s2[i - s1len];
		}
	}
	newLoc[i + 1] = '\0';
	return (newLoc);
}
