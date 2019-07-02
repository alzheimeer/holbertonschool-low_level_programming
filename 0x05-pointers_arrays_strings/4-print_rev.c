#include "holberton.h"
int _strlen(char *s);

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: none
 */

void print_rev(char *s)
{
	int c = 0, Ls = 0; /*use funtion length of a string Ls63*/

	while (*(s + Ls) != '\0')
		Ls++;
	while (*(s + c) != '\0')
		_putchar(*(s + ((Ls - 1) - (c++))));
	_putchar('\n');
}
