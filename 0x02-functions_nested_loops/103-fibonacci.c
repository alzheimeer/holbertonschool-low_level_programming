#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms
 *
 * Return: 0;
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int x = 2;

	while (c < 4000000)
	{
		c = a + b;

		if (c % 2 == 0)
		{
			x += c;
		}

		a = b;
		b = c;
	}

	printf("%i\n", x);

	return (0);
}
