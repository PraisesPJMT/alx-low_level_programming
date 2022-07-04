#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to address of struct name
 * @name: Pointer to memory of dog name
 * @age: Pointer to age of dog
 * @owner: Pointer to memory of dog owner
 *
 * Return: Void (Nothing)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
