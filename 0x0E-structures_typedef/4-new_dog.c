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
	char *name_;
	char *owner_;
	int n, o, i, j;
	struct dog *p;

	p = malloc(sizeof(struct dog));
	if (p)
		return (NULL);
	for (n = 0; *(name + n) != '\0'; n++)
		;
	for (o = 0; *(owner + o) != '\0'; o++)
		;
	name_ = malloc(n + 1);
	if (!name_)
	{
		for (i = 0; i <= n; i++)
			*(name_ + i) = *(name + i);
	} else
	{
		free(p);
		return (NULL);
	}
	owner_ = malloc(o + 1);
	if (!owner_)
	{
		for (j = 0; j <= o; j++)
			*(owner_ + j) = *(owner + j);
	} else
	{
		free(name_);
		free(p);
		return (NULL);
	}
	p->name = name_;
	p->age = age;
	p->owner = owner_;
	return (p);
}
