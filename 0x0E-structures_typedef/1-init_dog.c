#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type `struct dog`
 * @d: struct dog
 * @name:  name string
 * @age: age of type integer
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
