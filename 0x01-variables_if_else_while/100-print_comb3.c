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

	for (num = 0; num < 100; num++)
	{
		if (num < 10)
			putchar('0');
		putchar((num % 100) + '0');
		if (num < 98)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
