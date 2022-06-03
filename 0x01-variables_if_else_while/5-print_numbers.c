#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Display numbers from 0 to 9
  *
  * Return: Zero (0)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
