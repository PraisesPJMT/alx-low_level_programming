#include "main.h"

/**
 * _pow_recursion - Finds the value of x raised to the power of y
 * @x: Interger number
 * @y: Index power
 * Return: Value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
