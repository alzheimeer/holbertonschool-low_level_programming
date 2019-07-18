#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: The first string that receives
 * @s2: The second string that receives
 * @n: The number of bytes that you need copy
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i = 0, j = 0, m = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;
	p = malloc((i + j) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);

	i = 0, j = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[m])
	{
		m++;
	}
	while (j < n)
	{
		if (j > m)
			break;
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';
	return (p);
}
