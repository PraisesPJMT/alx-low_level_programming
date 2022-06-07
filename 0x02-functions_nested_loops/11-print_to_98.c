#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - print all natural numbers from n to 98
  * @n: input integer
  * Return: Always return 0
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
		printf("98");
	printf("\n");
}
