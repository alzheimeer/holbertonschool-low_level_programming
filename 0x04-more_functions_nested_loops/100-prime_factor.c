#include <stdio.h>

/**
 * main - prime factor of 612852475143
 * Return: Always 0.
 */

int main(void)
{
	int long n, d;

	n = 612852475143;
	for (d = 2; d <= n; d++)
	{
		if (n % d == 0)
		{
			n /= d;
			d--;
		}
	}
	printf("%ld\n", d);
	return (0);
}
