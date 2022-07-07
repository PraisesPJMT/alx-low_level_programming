#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 *
 * Description: Formarts are
 *	c: char		i: integer
 *	s: char *	f: float
 *	Print (nil) if string (s) is NULL
 *	Print new line at the end of the function
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *string;
	const char argType[] = "ifsc";
	unsigned int count, index, entry;

	va_start(arg, format);
	count = index = 0;
	while (format != 0 && format[count] != 0)
	{
		entry = 0;
		while (argType[entry] != '\0')
		{
			if (format[count] == argType[entry] && index != 0)
			{
				printf(", ");
				break;
			}
			entry++;
		}
		switch (format[count])
		{
			case 'i':
				printf("%d", va_arg(arg, int)), index = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double)), index = 1;
				break;
			case 'c':
				printf("%c", va_arg(arg, int)), index = 1;
				break;
			case 's':
				string = va_arg(arg, char *);
				if (string == NULL)
				{
					printf("(nul)");
					break;
				}
				printf("%s", string);
				break;
			default:
				break;
		}
		count++;
	}
	printf("\n");
	va_end(arg);
}
