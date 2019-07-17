#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: argument for the function
 *
 * Return: Nothing.
 */
char **strtow(char *str)
{
	int i = 0, j = 0, number = 0;
	char *s;
	int size = 0;

	for (i = o; str[i] != '\0'; i++)
	{
		if (str[i] != 10 && str[i - 1] == 10)
			number++;
	}
	s = malloc(number * sizeof(char));
	for (i = 0; i < size; i++)
	{
		s[i] = malloc(sizeof(char));
	}
	s[i] = '\0';
	return (s);
}
