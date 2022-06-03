#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Displays last digit of int n
  *
  * Return: Zero (0)
  */
int main(void)
{
	char str;

	str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	str = tolower(str);
	putchar("%c\n", str);
	return (0);
}
