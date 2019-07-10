#include "holberton.h"

/**
 * _strlen_recursion - that returns the length of a string.
 * @s: n counter bucle recursion
 * Return: On success 1 * length or 0.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
