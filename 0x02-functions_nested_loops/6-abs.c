#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: input interger
  * Return: absolute value
  */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
