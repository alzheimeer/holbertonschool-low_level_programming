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

	char *pname;
	char *powner;
	int n, o, i, j;
	struct dog *p;

	p = malloc(sizeof(struct dog));
	if (p == NULL)
		return (NULL);
	for (n = 0; *(name + n) != '\0'; n++)
		;
	for (o = 0; *(owner + o) != '\0'; o++)
		;
	pname = malloc(n + 1);
	if (pname != NULL)
	{
		for (i = 0; i <= n; i++)
			*(pname + i) = *(name + i);
	} else
	{
		free(p);
		return (NULL);
	}
	powner = malloc(o + 1);
	if (powner != NULL)
	{
		for (j = 0; j <= o; j++)
			*(powner + j) = *(owner + j);
	} else
	{
		free(pname);
		free(p);
		return (NULL);
	}
	p->name = pname;
	p->age = age;
	p->owner = powner;
	return (p);
}
