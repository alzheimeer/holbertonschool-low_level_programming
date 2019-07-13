#include <ctype.h>
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
	int sum = 0, i;

	if (argc == 0 || argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);

}
