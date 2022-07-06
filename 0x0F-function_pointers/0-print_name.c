#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: String containing the name
 * @f: Pointer to function
 *
 * Return: Nothing (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
