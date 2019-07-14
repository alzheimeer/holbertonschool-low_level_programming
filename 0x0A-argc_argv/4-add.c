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
	int i, sum = 0;
	
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
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
