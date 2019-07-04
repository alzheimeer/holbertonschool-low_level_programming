#include "holberton.h"
/**
 * reverse_array - Reverse a string
 * @a: The string that receives
 * @n: The second string that receives
 * Return: sucess
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int c;

	n--;
	while (n > j && n != j)
	{
		c = a[n];
		a[n] = a[j];
		a[j] = c;
		n--;
		j++;
	}
}
