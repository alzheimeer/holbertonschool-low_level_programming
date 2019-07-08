#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer dest
 * @src: pointer
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *(src + i);
	}

	return (dest);
}
