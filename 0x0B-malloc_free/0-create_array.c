#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of char
 *	and initializes it with a specific char
 * @size: Size of array
 * @c: Char to be initialized
 * Return: Pointer to the array if size is not zero (!0)
 *	Null if size is zero (0)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(c));
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
