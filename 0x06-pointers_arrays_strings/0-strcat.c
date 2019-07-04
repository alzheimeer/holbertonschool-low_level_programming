#include "holberton.h"

/**
 * *_strcat - Concat two strings
 * @dest: The string that receives
 * @src: 2 string
 * Return: dest
 **/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
