#include <stdio.h>

/**
 * main - 100 advanced
 *
 * Return: 0
 */
int main(void)
{
int x1, x2;

x1 = 48;
x2 = 48;

while (x2 < 58)
{
x1 = 48;
while (x1 < 58)
{
if (x2 != x1 && x2 < x1)
{
putchar(x2);
putchar(x1);
if (x1 == 57 && x2 == 56)
{
break;
}
putchar(',');
putchar(' ');
}
x1++;
}
x2++;
}
putchar('\n');
return (0);
}
