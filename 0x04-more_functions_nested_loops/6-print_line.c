#include "holberton.h"

/**
 * print_line - prints straight line n times.
 * @n: value to use.
 * Return: no
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(' ');
	}
	_putchar('\n');
}
