#include "main.h"

/**
 * alloc_grid - allocates a grid (2D Array)
 * @width: width in int
 * @height: height in int
 *
 *
 * Return: PTR to 2D array (int) if successful
 * else NULL if not successful
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = i; i >= 0; i--)
				free(grid[i]);

			free(grid);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
