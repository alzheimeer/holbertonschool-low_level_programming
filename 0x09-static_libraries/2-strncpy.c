#include "holberton.h"

/**
 * *_strncpy - Copy one string
 * @dest: The string that receives
 * @src: The second string that receives
 * @n: The number of char that prints
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
