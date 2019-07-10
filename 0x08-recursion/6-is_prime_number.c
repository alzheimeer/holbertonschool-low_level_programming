#include "holberton.h"
int p(int n, int i);
/**
 * is_prime_number - checks to see if number is prime
 * @n: number is prime?
 * Return: 1 if is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (p(n, 2));


}

/**
 * p - find prime
 * @n: number see
 * @i: int increment
 * Return: 0, 1.
 */
int p(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (p(n, i + 1));
}
