#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Display numbers in base 16 using putchar only
  *
  * Return: Zero (0)
  */
int main(void)
{
	char str;
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (str = 'a'; str < 'g'; str++)
		putchar(str);
	putchar('\n');
	return (0);
}
