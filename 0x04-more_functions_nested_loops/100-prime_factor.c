#include <stdio.h>

/**
 * main - prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 2; n > i; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
