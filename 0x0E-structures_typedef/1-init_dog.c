#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize of type.
 * @d: Dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of the owner
 * Return: 0
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
