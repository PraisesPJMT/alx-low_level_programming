#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs structure
 * @d: Pointer to the memory of dog structure
 *
 * Return: Nothing (void)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name), free(d->owner), free(d);
	}
}
