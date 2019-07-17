#include <stdlib.h>

/**
 * *argstostr - Function that return a pointer
 * @ac: The number of arguments
 * @av: The strings of arguments
 * Return: ar
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, size = 0, tam;
	char *ar;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}
	ar = malloc((size + 1) * (sizeof(char)));
	tam = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ar[tam] = av[i][j];
			tam++;
		}
		if (av[i][j] == '\0')
		{
			ar[tam] = '\n';
			tam++;
		}
	}
	ar[tam + 1] = '\0';
	return (ar);
}
