#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: sting
 * Return: nothing
 */

void puts_half(char *str)
{
	int Ls = 0, i, m;

	while (*(str + Ls) != '\0')
		Ls++;
	if (Ls % 2 != 0)
	{
		m = (Ls - 1) / 2;
	}
	else
		m = (Ls / 2);

	for (i = m; str[i] != 0; i++)
	{
			_putchar(str[i]);
	}
	_putchar('\n');


}
