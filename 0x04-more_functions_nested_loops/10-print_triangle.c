#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 * @size: # of lines.
 * Return: not
 */

void print_triangle(int size)
{
	int x, f, j;

	for (x = 0; x < size; x++)
	{
		for (j = 1; j < size - x; j++)
		{
			_putchar(' ');
		}
		for (f = 0; f < x; f++)
		{
			_putchar('#');
		}
		_putchar('#');
		if (x < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');









}
