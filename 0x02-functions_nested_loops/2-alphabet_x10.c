#include "holberton.h"
/**
 * print_alphabet_x10 - Write a function that prints 10
 * times the alphabet, in lowercase, followed by a new line
 *
 */
void print_alphabet_x10(void)
{
  char q;
  int i;
  for(i = 0; i <= 10; i++)
    {
      for(q = 'a'; q <= 'z'; q++)
	{
	  _putchar(q);
	}
      _putchar('\n');

    }
}
