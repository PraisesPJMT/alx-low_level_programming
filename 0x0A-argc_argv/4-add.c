#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Add positive numbers
 * @argc: Size of the argumente array
 * @argv: The input argument array
 * Description: Prints addition of all positive arguments
 *	Prints Error if one or more arguments is not an integer
 * Return: Zero if successful
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0'
			  || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
