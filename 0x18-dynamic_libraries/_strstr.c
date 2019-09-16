#include "holberton.h"


/**
 * _strstr - Function that return the number that coincide two strings
 * @haystack: The char to print
 * @needle: The char to print
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] != haystack[i])
				break;
		}
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (0);
}
