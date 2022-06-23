#include "main.h"

/**
 *_strncat - Concatenate strings
 *@dest: String Destination
 *@src: String Source
 *@n: Integer of source string
 *
 *Return: String destination (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[j + i] = src[j];
		else
			dest[j + i] = '\0';
	}
	return (dest);
}
