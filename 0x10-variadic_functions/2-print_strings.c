#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: String to be printed between string arguments
 * @n: Number of strings passed to the function
 *
 * Description: Print (nil) if string to be printed is NULL
 *	Don't print if seperator is (NULL)
 *	Print new line at the end of function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *string;
	unsigned int count;

	va_start(arg, n);
	for (count = 0; count < n; count++)
	{
		string = va_arg(arg, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (count < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
