#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Size of the argumente array
 * @argv: The input argument array
 * Return: Zero as success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
