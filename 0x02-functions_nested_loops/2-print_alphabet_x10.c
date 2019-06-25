#include "holberton.h"
/**
 * print_alphabet_x10 - print * 10
 * Return: 0;
 */
void print_alphabet_x10(void)
{
	char q;
	int i;

	for (i = 0; i <= 10; i++)
		{
	for (q = 'a'; q <= 'z'; q++)
	{
		_putchar(q);
	}
	_putchar('\n');

		}
}
