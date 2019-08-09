#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number one
 * @m: number two
 * Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int s;

	s = 0;
	s = n ^ m;
	int sup = 63;
	int p = 0;
	long int a = 1;

	while (sup >= 0)
	{
		if (s & a << sup)
		{
			p++;
		}
		sup--;
	}
	return (p);



}
