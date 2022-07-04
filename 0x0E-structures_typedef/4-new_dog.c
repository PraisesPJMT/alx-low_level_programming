#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: New name of dog
 * @owner: New name of owner
 * @age: New dog age
 *
 * Return: Pointer to new dog struct
 *	NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nameLen = 0, ownLen = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		nameLen++;
	newDog->name = malloc(nameLen + 1);
	if (newDog->name == NULL)
	{
		free(newDog->name);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		ownLen++;
	newDog->owner = malloc(ownLen + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		return (NULL);
	}
	newDog->age = age;
	for (i = 0; i < nameLen; i++)
		newDog->name[i] = name[i];
	newDog->name[i] = '\0';
	for (i = 0; i < ownLen; i++)
		newDog->owner[i] = owner[i];
	newDog->owner[i] = '\0';
	return (newDog);
}
