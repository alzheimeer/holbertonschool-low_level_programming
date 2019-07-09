#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input a
 * @size: size matrix
 * Return: none
 */



void print_diagsums(int *a, int size)
{

	int i, sd1 = 0, sd2 = 0;

	for (i = 0; i < size; i++)
	{
		sd1 = sd1 + a[(size * i) + i];
		sd2 = sd2 + a[(size - 1) * (i + 1)];

	}
	printf("%d, %d\n", sd1, sd2);

}
