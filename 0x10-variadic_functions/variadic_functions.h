#ifndef VAR_H
#define VAR_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void cx(va_list arg);
void dx(va_list arg);
void fx(va_list arg);
void sx(va_list arg);

/**
 * struct op - Struct op
 *@pt: A function pointer prints
 * @s: The function associated
 */
typedef struct op
{
	char *s;
	void (*pt)(va_list arg);
} abc;


#endif
