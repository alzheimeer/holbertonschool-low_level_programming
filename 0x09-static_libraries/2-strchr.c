#include "holberton.h"

/**
 * _strchr - that locates a character in a string
 * @s: character locate
 * @c: character to find
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i++))
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (*(s + i) == c)
	{
		return (&s[i]);
	}
	return (0);
}
