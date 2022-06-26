#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Return pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter
 * @str: Input string
 * Return: Pointer to duplicated string.
 */
char *_strdup(char *str)
{
	int i, strLen = 0;
	char *newLoc;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		strLen++;
	}

	newLoc = malloc(sizeof(char) * (strLen + 1));
	if (newLoc == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strLen + 1; i++)
		{
			newLoc[i] = str[i];
		}
		return (newLoc);
	}
}
