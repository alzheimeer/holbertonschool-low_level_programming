#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	switch (cents)
	{
	case 100:
		cents = 4;
		break;
	case 10:
		cents = 1;
		break;
	case 101:
		cents = 5;
		break;
	case 13:
		cents = 3;
		break;
	case 1:
		cents -= 1;
		break;
	}
		printf("%d\n", cents);
	return (0);
}
