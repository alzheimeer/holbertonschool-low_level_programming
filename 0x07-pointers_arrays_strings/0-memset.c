#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The char to print
 * @b: The char to print
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
