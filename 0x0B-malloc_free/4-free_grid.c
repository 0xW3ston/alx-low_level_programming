#include "main.h"

/**
 * free_grid - deallocates a grid
 * @grid: ptr to the 2d grid
 * @height: height in int
 *
 *
 * Return: Nothing (always)
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
