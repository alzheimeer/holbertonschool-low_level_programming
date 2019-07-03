#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - crackme
 *
 * Return: 0
 */
int main(void)
{
	int rand;
	int c;
	int x;

	rand(time(NULL));
	for (c = 0, x = 2772; x > 122; c++)
	{
		rand = (rand() % 125) + 1;
		printf("%c", rand);
		x -= rand;
	}
	printf("%c", x);

	return (0);
}
