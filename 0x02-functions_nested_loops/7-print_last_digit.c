#include "holberton.h"

/**
 * int print_last digit
 */


int print_last_digit(int n)
{
	int q;
	q = n % 10;
	if (q<0)
	q *= -1;
	_putchar(q + '0');
	return(q);
}
