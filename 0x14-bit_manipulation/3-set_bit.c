#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index a set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	s = 0;
	if (index > 63)
		return (-1);
	s = *n | (1 << index);
	*n = s;
	return (1);
}
