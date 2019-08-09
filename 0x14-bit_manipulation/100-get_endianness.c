#include "holberton.h"
#include <stdint.h>
/**
 * get_endianness - checks the endiannes
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;
	int n = 0;

	if (p[0] == 1)
		n = 1;
	else
		n = 0;

	return (n);

}
