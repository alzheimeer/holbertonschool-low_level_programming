#include "holberton.h"

int end(char *s);
int check(char *s, int ini, int fin);
/**
 * is_palindrome - identifies strings as palindromes
 * @s: string
 * Return: 1 if palindrome, 0 other
 */
int is_palindrome(char *s)
{
	int fin = (end(s) - 1);

	return (check(s, 0, fin));
}
/**
 * check - comparing characters
 * @s: string
 * @ini: ini position
 * @fin: end  position
 * Return: 1 if palindrome, 0 otherwise
 */

int check(char *s, int ini, int fin)
{

	if (s[ini] != s[fin])
		return (0);

	if (ini >= fin)
		return (1);

	return (check(s, ini + 1, fin - 1));
}
/**
 * end - find end position
 * @s: string
 * Return: end position
 */
int end(char *s)
{
	if (*s)
	{
		return (end(s + 1) + 1);
	}
	else
		return (0);
}
