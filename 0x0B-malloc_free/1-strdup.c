#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: pointer
 */



char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
		return (NULL);

	p = malloc(_strlen(str) + 1);

	if (p == NULL)
		return (NULL);
	_strcpy(p, str);
	return (p);
}





/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: pointer char
 * Return: nothing
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
