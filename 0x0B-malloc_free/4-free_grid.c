#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dim grid previously created
 * @grid: Pinter to grid previously created
 * @height: Height of grid previously created
 * Return: Void (Nothing)
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (row = height - 1; row >= 0; row--)
	{
		free(grid[row]);
	}
	free(grid);
}
