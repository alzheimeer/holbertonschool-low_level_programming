#include <stdio.h>
/**
 *main - Print Size
 *
 *Description: prints the size of various types on the computer
 *it is compiled and run on.
 *
 *Return: returns 0
 */
int main(void)
{
printf("char: %d byte(s)\n", sizeof(char));
printf("int: %d byte(s)\n", sizeof(int));
printf("long int: %d byte(s)\n", sizeof(long int));
printf("long long int: %d byte(s)\n", sizeof(long long int));
printf("float: %d byte(s)\n", sizeof(float));
return (0);
}
