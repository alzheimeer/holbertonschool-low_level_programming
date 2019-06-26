#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0;
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int n = 3;

	printf("%li, ", a);
	printf("%li, ", b);

	while (n < 50)
	{
		c = a + b;
		printf("%li, ", c);
		a = b;
		b = c;
		n++;
	}

	while (n == 50)
	{
		c = a + b;
		printf("%li\n", c);
		a = b;
		b = c;
		n++;
	}
	return (0);
}
