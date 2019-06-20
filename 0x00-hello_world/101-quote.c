#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
char f[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, f, 59);
return (1);
}
