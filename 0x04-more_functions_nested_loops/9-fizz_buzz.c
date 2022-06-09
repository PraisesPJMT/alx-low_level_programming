#include <stdio.h>

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
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%i", num);

		if (num < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
