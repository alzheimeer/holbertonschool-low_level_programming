#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: value for check
 * Return: 1 if c is uppercase, 0 other case.
 */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
