#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *array_range - Function that allocates memory for an array of integers
 * @min: The min number
 * @max: The max number
 * Return: On success 1.
 */
int *array_range(int min, int max)
{
	int *p;
	int n = 0, i = 0;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;
	p = malloc(n * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (i <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);

}
