#include "holberton.h"

/**
 * _pow_recursion - Calculate the pow of a number
 * @x: The number that receives
 * @y: The pow of the number
 * Return: result pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y == 0)
		return (1);
	else
		return (0);
}
