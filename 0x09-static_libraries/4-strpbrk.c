#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: s[i]
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (0);
}
