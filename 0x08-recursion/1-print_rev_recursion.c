#include <string.h>
#include "main.h"

/**
 *  _print_rev_recursion - Prints a string, followed by a new line.
 *  @s: String to be printed
 *  Return: Void (Nothing)
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
