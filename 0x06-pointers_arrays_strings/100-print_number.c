#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: input
 * Return: multiples print
 */

void print_number(int n)
{
	unsigned int m, d, c;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	c = 1;

	while (d > 9)
	{
		d /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((m / c) % 10) + 48);
	}
}
