#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *	 on each element of an array
 * @size: Size of the array
 * @action: Pointer to the function to use
 * @array: Array to pass
 *
 * Return: Nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array && action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			(action) (array[index]);
		}
	}
}
