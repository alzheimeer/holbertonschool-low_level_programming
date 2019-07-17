#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Function that return a pointer
 * @grid: The width of the array
 * @height: The height of the array
 * Return: On success 1.
 */
void free_grid(int **grid, int height)
{
	int j = 0, s = 0;

	(void)height;
	if (grid)
	{
		while (*grid[s])
			s++;
		for (j = 0; j < s; j++)
			free(grid[j]);
		free(grid);
	}

}
