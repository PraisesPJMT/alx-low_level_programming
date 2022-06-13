#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  * @a: First Input integer
  * @b: Second input integer
  * Return: void (Nothing)
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = *a;
	*a = temp;
}
