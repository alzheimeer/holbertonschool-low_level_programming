#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints the structure
 * @d: structure dog contains all the basic info
 * return - 0.
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->age == '\0')
	{	printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}

	else if (d->owner == NULL)
	{	printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
