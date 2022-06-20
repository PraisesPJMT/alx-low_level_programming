#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - Prints sum of two diagonals of a square
  *	matrix of integers
  * @a: Matrix of integers
  * @size: Size of matrix a
  * Return: Void (Nothing)
  */
void print_diagsums(int *a, int size)
{
	int row, col;
	int rDiagSum = 0, lDiagSum = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
			{
				rDiagSum += a[(size + 1) * row];
			}

			if (row + col == size - 1)
			{
				lDiagSum += a[(size - 1) * (row + 1)];
			}
		}
	}
	printf("%d, %d\n", rDiagSum, lDiagSum);
}
