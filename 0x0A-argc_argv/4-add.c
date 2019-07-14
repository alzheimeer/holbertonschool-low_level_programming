#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints add all arguments
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	long sum;

	for (i = 1, sum = 0; i < argc; i++)
	{
		if (*argv[i] == 0 || atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%ld\n", sum);
	return (0);
}
