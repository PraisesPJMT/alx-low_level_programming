#include <string.h>
#include "main.h"

/**
 *  _strlen_recursion - Counts the length os a tring
 *  @s: String to be printed
 *  Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
