#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: Size of the argumente array
 * @argv: The input argument array
 * Description: Prints Error is prog does not receivees 2 arguments
 *	Prints product of two argument
 * Return: Zero if successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
