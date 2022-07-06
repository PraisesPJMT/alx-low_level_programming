#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to parse
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: Index of the first element for which the cmp
 *	function does not return 0.
 *	(-1) if no element matches
 *	(-1) if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if ((*cmp) (array[index]))
		{
			return (index);
		}
	}
	return (-1);
}
