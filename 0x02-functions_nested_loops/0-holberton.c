#include "holberton.h"
/**
 * main - Prints "Holberton" with a new line to the standard output.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char t, p[] = "Holberton\n";

	while (i <= 9)
	{
		t = p[i];
		_putchar(t);
		i++;
	}
	return (0);
}
