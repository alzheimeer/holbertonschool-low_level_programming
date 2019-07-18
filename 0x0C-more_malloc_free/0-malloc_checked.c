#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - Function that allocates memory
 * @b: The size of the memory that need
 * Return: On success 1.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
