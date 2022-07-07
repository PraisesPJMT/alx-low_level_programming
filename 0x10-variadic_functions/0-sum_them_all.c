#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all parameters
 * @n: Number of integers passed to be sumed
 *
 * Return: Sum of integers
 *	(0) if n is zero(0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum = 0, count;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (count = 0; count < n; count++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
