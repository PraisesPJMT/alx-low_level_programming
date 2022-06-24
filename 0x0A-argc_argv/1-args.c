#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Size of the argumente array
 * @argv: The input argument array
 * Return: Zero as success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
