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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
