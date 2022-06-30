#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates a memory using using malloc
 * @b: size of memory to be alocated
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
