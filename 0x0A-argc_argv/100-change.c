#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coin to
 *	make change for amount of money
 * @argc: Size of the argumente array
 * @argv: The input argument array
 * Description: If arguments is not 1, print error
 *	if argument is negative, print 0
 *	Else print minimum change coins possible
 *	Coin Values: 25, 10, 5, and 1 cent.
 * Return: Zero if successful
 */
int main(int argc, char *argv[])
{
	int c25, c10, c5, c2, c1, change;

	if (argc != 2)
	{
		printf("Error\n");
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		c25 = atoi(argv[1]) / 25;
		c10 = (atoi(argv[1]) % 25) / 10;
		c5 = ((atoi(argv[1]) % 25) % 10) / 5;
		c2 = (((atoi(argv[1]) % 25) % 10) % 5) / 2;
		c1 = (((atoi(argv[1]) % 25) % 10) % 5) % 2;
		change = c25 + c10 + c5 + c2 + c1;
		printf("%d\n", change);
	}
	return (0);
}
