#include "main.h"

/**
 * factorial - Finds the factorial of a given number
 * @n: Integer to compute factorial
 * Return: Factorial of integer n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
