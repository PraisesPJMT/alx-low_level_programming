#include "main.h"

/**
  * _isdigit - Checks for a digit (0 - 9)
  * @c: Input character
  * Return: 1 if c is a digit
  *         0 otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
