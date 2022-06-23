#include "main.h"
/**
  * _strcat - Concatnate strings
  * @dest: String to hold concatnation
  * @src: String to be added
  * Return: Concatnated strings
 */
char *_strcat(char *dest, char *src)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;
	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}
