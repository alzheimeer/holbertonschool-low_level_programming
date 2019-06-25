#include "holberton.h"
/**
 * main - Prints "Holberton" with a new line to the standard output.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char p[] = "Holberton\n";

	while (i <= 9)
	{

		_putchar(p[i]);
		i++;
	}
	return (0);
}
