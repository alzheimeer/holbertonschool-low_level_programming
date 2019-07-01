#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: input
 * Return: multiples print
 *
 *
 *
 *void print_number(int n)
 *{
 *
 *	if (n < 0)
 *	{
 *		_putchar('-');
 *		n = n * -1;
 *	}
 *	if (n < 10)
 *	{
 *		_putchar(n + '0');
 *	}
 *	if (n < 100 &&  n > 9)
 *	{
 *		_putchar(n / 10 + '0');
 *		_putchar(n % 10 + '0');
 *	}
 *	if (n < 1000 && n > 99)
 *	{
 *		_putchar(n / 100 + '0');
 *		_putchar((n / 10) % 10 + '0');
 *		_putchar(n % 10 + '0');
 *	}
 *	if (n < 10000 && n > 999)
 *	{
 *		_putchar(n / 1000 + '0');
 *		_putchar((n / 100) % 10 + '0');
 *		_putchar((n / 10) % 10 + '0');
 *		_putchar(n % 10 + '0');
 *	}
}*/

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
