#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: Input integer
  * Return: Value of the last digit
  */
int print_last_digit(int n)
{
	int lDig;

	lDig = (n % 10);
	if (lDig < 0)
		lDig = (-1 * lDig);
	_putchar(lDig + '0');
	return (lDig);
}
