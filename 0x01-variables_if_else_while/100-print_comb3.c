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

	for (num = 48; num < 148; num++)
	{
		if (num < 58)
			putchar('0');
		putchar(num);
		if (num < 147)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
