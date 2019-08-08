#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to convert
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int sup = 63;
	int j = 0;
	long int a = 1;

	while (sup >= 0)
	{
		if (n & a << sup)
		{
			j = 1;
			_putchar(49);
		}
		else if (j == 1)
			_putchar(48);
		sup--;
	}
	if (j == 0)
		_putchar(48);
}
