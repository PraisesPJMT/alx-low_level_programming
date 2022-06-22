#include "main.h"

/**
 * is_prime_number - Returns 1 if n is prime number
 * @n: Integer to check if it is a prime number
 * Return: 1 if n is prime number
 *	0 if otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_check(2, n));
}

/**
 * prime_check - Check if num is prime number
 * @i: Itetrative divisor integer
 * @num: Intger to check if is prime number
 * Return: 1 if num is prime number
 *	0 if otherwise
 */
int prime_check(int i, int num)
{
	if (num % i == 0)
	{
		return (0);
	}
	else if (i > num / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(i + 1, num));
	}
}
