#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name
 * @f: Function prints a name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
