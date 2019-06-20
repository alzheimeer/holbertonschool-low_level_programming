#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char f[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int s = sizeof(f);
write(2, f, s);
return (1);
}
