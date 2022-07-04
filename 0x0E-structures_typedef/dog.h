#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Structure that contains dog properties
 * @name: Name of dog
 * @owner: Owner of dog
 * @age: Age of dog in nearest weeks
 *
 * Description: The function defines attributes of
 *	name, owner, and age to the structure "dog"
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - Typeof for structure dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
