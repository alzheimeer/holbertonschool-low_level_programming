#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _atoi - Function that convert a string to an integer
 * @s: String to be converted an integer
 * Return: Integer value
 */


int _atoi(char *s)

{
	int x = 0, i = 0, minus = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			minus *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		x = (x * 10) - (s[i++] - '0');

	return (x * minus);
}



/**
 * checkdigits - checks if all the characters are digits.
 * @arg: the arguments of program.
 * Return: 1 all digits 0 otherwise.
 */
int checkdigits(char **arg)
{
	int i, j;

	for (i = 1; i <= 2; i++)
		for (j = 0; arg[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				return (0);
		}
	return (1);
}


/**
 * main - prints multiplies two arguments
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 */
int main(int argc, char **argv)
{
	unsigned long int mul;

	if (argc != 3 || checkdigits(argv) != 1)
	{
		puts("Error");
		exit(98);
	}

	mul = _atoi(argv[1]) * _atoi(argv[2]);

	printf("%lu\n", mul);
	return (0);
}
