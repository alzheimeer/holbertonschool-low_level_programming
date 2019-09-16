#include "holberton.h"

/**
 * *_strspn - Function that return the number that coincide two strings
 * @s: The character to print
 * @accept: The character to print
 * Return: number of repeat.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int o = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == accept[j])
			{
				o++;
			}
		}
		if (o < i)
			break;
		i++;
	}
	return (o);
}
