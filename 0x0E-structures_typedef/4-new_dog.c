#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name2;
	char *owner2;
	int n, o, i, j;
	struct dog *p;

	p = malloc(sizeof(struct dog));
	if (p)
		return (NULL);
	for (n = 0; *(name + n) != '\0'; n++)
		;
	for (o = 0; *(owner + o) != '\0'; o++)
		;
	name2 = malloc(n + 1);
	if (name2)
	{
		for (i = 0; i <= n; i++)
			*(name2 + i) = *(name + i);
	} else
	{
		free(p);
		return (NULL);
	}
	owner2 = malloc(o + 1);
	if (owner2)
	{
		for (j = 0; j <= o; j++)
			*(owner2 + j) = *(owner + j);
	} else
	{
		free(name2);
		free(p);
		return (NULL);
	}
	p->name = name2;
	p->age = age;
	p->owner = owner2;
	return (p);
}
