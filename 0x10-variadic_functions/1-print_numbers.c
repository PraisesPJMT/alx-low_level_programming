#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator:String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int counter;

	if (separator == 0)
	{
		return;
	}

	va_start(arg, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(arg, int));
		if (counter < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
