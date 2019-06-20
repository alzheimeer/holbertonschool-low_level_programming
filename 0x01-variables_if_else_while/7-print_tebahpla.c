#include <stdio.h>
/**
 * main - Reverse
 *
 * Return: 0
 */

int main(void)
{
char t[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 25; i >= 0; i--)
{
putchar(t[i]);
}
putchar('\n');
return (0);
}
