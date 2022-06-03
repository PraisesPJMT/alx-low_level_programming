#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Display all aphabets in lower case
  *
  * Return: Zero (0)
  */
int main(void)
{
	char str;

	for (str = "a"; str <= "z"; str++)
		putchar(str);
	putchar("\n");
	return (0);
}
