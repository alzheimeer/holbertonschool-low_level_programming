#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints add all arguments
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int sum, c, i;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1 ;c < argc; c++)
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (!(isdigit(argv[c][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
