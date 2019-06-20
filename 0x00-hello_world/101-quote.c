#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
char f[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int s;
s = sizeof(f);
write(2, f, s);
return (1);
}
