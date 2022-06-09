#include "main.h"

/**
 * main - Entry
 *
 * Description: Prints number from 1-100
 *		Prints buzz if number%3=0
 *		Prints fizz if numbe%5=0
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%i", num);

		if (n < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
