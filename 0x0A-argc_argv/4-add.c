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
	long sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == 48)
		{
		}
		else if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) > 0)
		{
		sum += atoi(argv[i]);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
