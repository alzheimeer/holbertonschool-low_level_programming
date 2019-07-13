#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	return (0);
	(void)argv;
}
