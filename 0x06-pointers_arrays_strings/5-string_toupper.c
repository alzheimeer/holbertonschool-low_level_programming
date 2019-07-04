#include "holberton.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: string
 *
 * Return: String Uppercase.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
