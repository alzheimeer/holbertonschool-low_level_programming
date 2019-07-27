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
	int j, i = 0;
	abc funcs[] = {
		{"c", cx},
		{"i", dx},
		{"f", fx},
		{"s", sx}
	};

	va_start(args, format);
	while (format[i])
	{
		j = 0;

		while (j < 4 && format[i] != *(funcs[j].s))
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


/**
 * cx - Prints a char.
 * @arg: A list pointing to char to print.
 */
void cx(va_list arg)
{
	printf("%c", (char) va_arg(arg, int));
}



/**
 * dx - Prints a integer.
 * @arg: A list pointing to int to print.
 */

void dx(va_list arg)
{
	printf("%d", va_arg(arg, int));
}





/**
 * fx - Prints a float.
 * @arg: A list pointing to float to print.
 */
void fx(va_list arg)
{
	printf("%f", (float)va_arg(arg, double));
}




/**
 * sx - Prints a string.
 * @arg: A list pointing to string to print.
 */

void sx(va_list arg)
{
	char *p = va_arg(arg, char *);

	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
	printf("\n");
}
