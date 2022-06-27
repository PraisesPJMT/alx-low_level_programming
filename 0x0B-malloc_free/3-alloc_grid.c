#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dim array of integers
 * @width: Width of the array
 * @height: Height of the array
 * Return: Pointer to the 2 dim array of integers
 *	NULL if width or height is 0 or negative
 *	NULL if insufficient memory was available
 */
int **alloc_grid(int width, int height)
{
	int row, col, *addr, **arr;

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **)malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		arr[row] = (int *)malloc(sizeof(int) * width);
		if (arr[row] == NULL)
		{
			for (row = 0; row < height; row++)
			{
				addr = arr[row];
				free(addr);
				return (NULL);
			}
			free(arr);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			arr[row][col] = 0;
		}
	}
	return (arr);
}
