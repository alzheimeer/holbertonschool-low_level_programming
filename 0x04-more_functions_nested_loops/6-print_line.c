#include "holberton.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
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
