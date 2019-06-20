#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Write a C program that prints
 * Return: 1
 */
int main(void)
{
int mao = sizeof("and that piece of art is useful - Dora Korpar, 2015-10-19");
write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", mao);
return (1);
}
