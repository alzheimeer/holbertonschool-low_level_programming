#include "holberton.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{

	int c = *a;
	*a = *b;
	*b = c;
}
