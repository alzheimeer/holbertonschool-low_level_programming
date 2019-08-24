#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary
 * Return: the converted number
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n, z;

	i = 0;
	n = 0;
	z = 1;
	if (b == NULL)
		return (0);
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		i++;
	}
	for (; i > -1; i--)
	{
		if (b[i - 1] == 49)
		{
			n = n + z;
			z = z * 2;
		}
		else
			z = z * 2;
	}
	return (n);

}
