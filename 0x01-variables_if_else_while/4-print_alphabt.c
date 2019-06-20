#include <stdio.h>
/**
 * main - For Practice
 * Print all the letters except q and e
 * Return: 0
 */

int main(void)
{
char t[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(t[i]);
if (i == 3 || i == 15)
{
i++;
}
}
putchar('\n');
return (0);
}
