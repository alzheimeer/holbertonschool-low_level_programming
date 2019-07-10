#include "holberton.h"
int msqrt(int n, int i);

/**
 * _sqrt_recursion - Calculate the square root
 * @n: The number that receives
 * Return: On success 1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (msqrt(1, n));

}


/**
 * msqrt - Calculate the square root
 * @n: The number that receives
 * @i: The number that iterate
 * Return:  result or -1
 */
int msqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (msqrt(i + 1, n));
}
