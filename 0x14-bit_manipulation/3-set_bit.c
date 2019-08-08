#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index a set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char b[64];
	int i = 0, sup = 62, j = 0, nm = 0, z = 1;
	long int a = 1;

	for (; i < 63; i++)
	{
		b[i] = 0;
	}
	i = 0;
	if (index > 63)
		return (-1);
	while (sup >= 0)
	{
		if (*n & a << sup)
		{
			j = 1;
			b[i] = 1;
		}
		else if (j == 1)
			b[i] = 0;
		sup--;
		i++;
	}
	if (j == 0)
		b[i] = 0;

	b[62 - index] = 1;


	for (i = 62; i > 0; i--)
	{
		if (b[i] == 1)
		{
			nm = nm + z;
			z = z * 2;
		}
		else
			z = z * 2;
	}
	return (*n = nm);
}
