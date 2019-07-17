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
	int len = 0, i, j;
	int *ptr, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	len = sizeof(int *) * width + sizeof(int) * height * width;
	arr = (int **)malloc(len);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	ptr = (int *)(arr + width);

	for (i = 0; i < width; i++)
		arr[i] = (ptr + height * i);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			return (arr);
	return (0);
}
