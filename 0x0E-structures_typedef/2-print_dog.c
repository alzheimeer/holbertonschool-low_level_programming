#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints the structure
 * @d: structure dog contains all the basic info
 * return - 0.
 **/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
