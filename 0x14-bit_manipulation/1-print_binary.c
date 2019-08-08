#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to convert
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int sup = 4 * sizeof(int);

	while (sup >= 0)
	{
		if (n & 1 << sup)
			_putchar(49);
		else
			_putchar(48);
		sup--;
	}
}
