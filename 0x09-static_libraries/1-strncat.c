#include "holberton.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: The string that receives
 * @src: The second string that receives
 * @n: The number of char that prints
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, m = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[m])
	{
		m++;
	}
	while (j < n)
	{
		if (j > m)
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
