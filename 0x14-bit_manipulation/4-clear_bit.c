#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: position a set in 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s = 0;

	if (index > 63)
		return (-1);
	s = *n & ~(1 << index);
	*n = s;
	return (1);
}
