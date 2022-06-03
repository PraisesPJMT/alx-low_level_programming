#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Display all aphabets in lower case and reversed
  *
  * Return: Zero (0)
  */
int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
		putchar(str);
	putchar('\n');
	return (0);
}
