#include <stdio.h>
/**
 * main - Numbers separated
 *
 * Return: 0
 */

int main(void)
{
char t[10] = "0123456789";
int i;

for (i = 0; i < 10; i++)
{
putchar(t[i]);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
