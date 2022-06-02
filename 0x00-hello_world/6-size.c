#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Displays sizes and territory
  *
  * Return: 0 as success
  */
int main(void)
{
	char str;
	int num;
	long int ln;
	long long int lln;
	float flt;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(str));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ln));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lln));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));
	return (0);
}
