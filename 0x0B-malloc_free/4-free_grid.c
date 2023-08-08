#include "main.h"

/**
 * free_grid - Function that frees the 2 dimensional array
 * @grid: 2d grid
 * @height: Number of rows
 * Return: 0
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

