#include <stdio.h>
#include "main.h"

/**
  * print_array - Prints n elements of an array *a
  * @a: Input array
  * @n: Input integer
  * Return: void (Nothing)
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
