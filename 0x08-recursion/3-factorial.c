#include "holberton.h"

/**
 * factorial - Prints the factorial of a number
 * @n: The number that receives
 * Return: On success 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);


}
