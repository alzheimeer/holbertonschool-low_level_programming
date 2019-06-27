#include <stdio.h>

/**
 * main - 104 Prints the first 98 Fibonacci numbers
 *
 * Return: 0;
 */
int main(void)
{
	int count = 3;
	double c;
	double a = 1;
	double b = 2;

	printf("%.0f, ", a);
	printf("%.0f, ", b);

	while (count <= 98)
	{
		c = a + b;
		printf("%.0f", c);
		if (count < 98)
			printf(", ");
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
