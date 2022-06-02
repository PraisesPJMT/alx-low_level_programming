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
	long int longNum;
	long long int longLong;
	float flt;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(str));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longNum));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLong));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));
	return (0);
}
