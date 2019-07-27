#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints all arguments passed to it
 * @format: list of argument types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int j = 0, i = 0;
	abc funcs[] = {
		{"c", cx},
		{"i", dx},
		{"f", fx},
		{"s", sx}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].s)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].pt(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}




void cx(va_list arg)
{
	printf("%c", (char) va_arg(arg,int));
}


void dx(va_list arg)
{
	printf("%d", va_arg(arg,int));
}


void fx(va_list arg)
{
	printf("%f", (float)va_arg(arg, double));
}


void sx(va_list arg)
{
	char *p = va_arg(arg, char *);
	if ( p == NULL)
	{
		printf("(nil)");
		return;
		
	}
	printf("%s", p);

	printf("\n");
}
