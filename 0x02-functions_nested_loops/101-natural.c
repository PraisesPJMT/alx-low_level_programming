#include <stdio.h>
#include "main.h"

/**
  * main - computes and print the sum of all multiples of
  *        3 or 5 below 1024.
  * Return: Zero 0
  */
int main(void)
{
	int i, multSum;

	for (i = 0; i < 1024; 1++)
		if (((i % 3) == 0) || ((i % 5) == 0))
			multSum += i;
	printf("%d\n", multSum);
	return (0);
}
