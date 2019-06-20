#include <stdio.h>

/**
 * main - 00 to 99
 *
 * Return: 0
 */
int main(void)
{
int p1 = 48;
int p2 = 48;

while (p2 < 58)
{
p1 = 48;
while (p1 < 58)
{
putchar(p2);
putchar(p1);
if (p1 == 57 && p2 == 57)
{
break;
}
putchar(',');
putchar(' ');
p1++;
}
p2++;
}
putchar('\n');
return (0);
}
