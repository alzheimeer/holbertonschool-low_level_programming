#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: The width of the array
 * @height: The height of the array
 * Return: pointer
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(arr + i) = (int *) malloc(width * sizeof(int));
		if (*(arr + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(arr + j));
			free(arr);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(arr + i) + j) = 0;

	return (arr);
}
