#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatnates all the arguments of the program
 * @ac: Number of arguments
 * @av: Array of argument
 * Description: Each argument should be followed by a \n in the new string
 * Return: Pointer to new concatnated string
 *	Null if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, z, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; z++)
		{
			length++;
		}
		length += 1;
	}
	str = malloc(sizeof(char) * length + 1);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; ++z)
		{
			str[length] = temp[z];
			length++;
		}
			str[length] = '\n';
			length++;
	}
	str[length] = '\0';
	return (str);
}
