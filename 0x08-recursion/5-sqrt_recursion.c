#include "main.h"

/**
 * _sqrt_recursion - Finds the natural square root of a number recursively
 * @n: Integer to find sqrt
 * Return: Sqrt of integer n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_check(1, n));
}

/**
 * _sqrt_check - Checks if guess is the sqrt of n
 * @guess: Iterative Sqrt guess
 * @num: Integer to check for sqrt
 * Return: Sqrt of num if natural
 *	Or -1 if not natural
 */
int _sqrt_check(int guess, int num)
{
	if (guess * guess == num)
	{
		return (guess);
	}
	else if (guess * guess > num)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_check(guess + 1, num));
	}
}
