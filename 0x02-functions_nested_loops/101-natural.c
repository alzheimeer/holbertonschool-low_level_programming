#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0;
 */

int main(void)
{
	int x, p = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			p += x;
		}
		x++;
	}
	printf("%d\n", p);
	return (0);
}
