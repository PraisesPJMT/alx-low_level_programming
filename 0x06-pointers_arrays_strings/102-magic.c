#include <stdio.h>

/**
  * main - Prints a[2] followed by a new line
  * Return: Zero (0)
  */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
