#include "holberton.h"

/**
 * rev_string - reverse a string not print
 * @s: string to reverse
 * Return: noting
 */

void rev_string(char *s)
{
	int l, i, Ls = 0;
	char *i_ptr, *end_ptr, c;

	while (*(s + Ls) != '\0')
		Ls++;
	l = Ls;
	i_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
		end_ptr++;
	for (i = 0; i < l / 2; i++)
	{
		c = *end_ptr;
		*end_ptr = *i_ptr;
		*i_ptr = c;
		i_ptr++;
		end_ptr--;
	}
}


