#include "holberton.h"


/**
 * _strstr - Function that return the number that coincide two strings
 * @haystack: The char to print
 * @needle: The char to print
 * Return: needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (*(needle + i))
	{
		for (j = 0; *(haystack + j); j++)
		{
			if (*(needle + i) == haystack[j])
			{
				return (&needle[i]);
			}
		}
		i++;

	}
	if (haystack[j] == needle[i])
	{
		return (&needle[i]);
	}
	return (0);
}
