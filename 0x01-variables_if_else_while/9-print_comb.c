#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Display possible combinations of single digit numbers
  *
  * Return: Zero (0)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		putchar(", ");
	}
	return (0);
}
