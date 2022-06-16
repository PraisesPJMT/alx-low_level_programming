#include "main.h"

/**
 * string_toupper - uppercase all lower case letters in a string.
 * @s: string to process.
 *
 * Return: a pointer.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	s[i] = '\0';

	return (s);
}
