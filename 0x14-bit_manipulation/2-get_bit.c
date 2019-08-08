#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index:  is the index
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char b[100];
	int i = 0, sup = 63, j = 0;
	long int a = 1;

	for (; i < 63; i++)
	{
		b[i] = 0;
	}
	i = 0;
	if (n == '\0')
		return (-1);
	while (sup >= 0)
	{
		if (n & a << sup)
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
	return (b[i - 1 - index]);
}
