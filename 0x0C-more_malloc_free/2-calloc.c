#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb: The number of elements
 * @size: The size of the elements
 *
 * Return: On success 1.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	if (i > nmemb)
		p[i] = 0;
	return (p);
}
