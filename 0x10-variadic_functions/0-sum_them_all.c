#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum all arguments
 * @n: ints
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list m;

	if (n == 0)
		return (0);
	va_start(m, n);
	while (i < (int) n)
	{
		sum = sum + va_arg(m, int);
		i++;
	}

	va_end(m);
	return (sum);
}
