#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - crack
 *
 * Return: 0
 */
int main(void)
{
	int rch, b = 0;

	srand(time(0));
	while (b < 2772 - 127)
	{
		rch = rand() % 127;
		if (rch > 32)
		{
			putchar(rch);
			b = b + rch;
		}
	}
	putchar(2772 - b);
	return (0);
}
