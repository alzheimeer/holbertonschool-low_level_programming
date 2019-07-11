#include "holberton.h"
/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared
 * @s2: The second string to be compared - may contain wildcards.
 * Return: If the strings identical 1 Otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
		return (0);
	return (0);
}
