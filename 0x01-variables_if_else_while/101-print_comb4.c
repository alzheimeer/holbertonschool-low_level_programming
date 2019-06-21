#include <stdio.h>

/**
 * main - 101
 *
 * Return: 0
 */

int main(void)
{
int x1, x2, x3;

x1 = 48;
x2 = 48;
x3 = 48;

while (x2 < 58)
{
x1 = 48;
while (x1 < 58)
{
x3 = 48;
while (x3 < 58)
{
if (x2 != x1 && x2 != x3 && x1 != x3 && x2 < x1 && x1 < x3)
{
putchar(x2);
putchar(x1);
putchar(x3);
if (x1 == 56 && x2 == 55 && x3 == 57)
{
break;
}
putchar(',');
putchar(' ');
}
x3++;
}
x1++;
}
x2++;
}
putchar('\n');
return (0);
}
