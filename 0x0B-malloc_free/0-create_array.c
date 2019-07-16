#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - create array of char,nitializes it with a specific char.
 * @c: char
 * @size: integer
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *vector;

	vector = malloc(size * sizeof(char));

	if  (vector == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		vector[i] = c;

	vector[i] = '\0';
	return (vector);

}
