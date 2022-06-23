#include "main.h"

/**
 * _strncpy - Concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @des
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i_01 = 0;

	for (i_01 = 0; i_01 < n && src[i_01] != '\0'; i_01++)
		dest[i_01] = src[i_01];
	for ( ; i_01 < n ; i_01++)
		dest[i_01] = '\0';

	return (dest);
}
