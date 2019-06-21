#include <stdio.h>

/**
 * main - 103.
 *
 * Return: 0
 */
int main(void)
{
int x1, x2, x3, x4, op1, op2;

x1 = x2 = x3 = x4 = 48;
while (x4 < 58)
{
x3 = 48;
while (x3 < 58)
{
x2 = 48;
while (x2 < 58)
{
x1 = 48;
while (x1 < 58)
{
op1 = (x4 * 10) + x3;
op2 = (x2 * 10) + x1;
if (op1 < op2)
{
putchar(x4);
putchar(x3);
putchar(' ');
putchar(x2);
putchar(x1);

if (x4 == 57 && x3 == 56 && x2 == 57 && x1 == 57)
break;
putchar(',');
putchar(' ');
}
x1++;
}
x2++;
}
x3++;
}
x4++;
}
putchar('\n');
return (0);
}
