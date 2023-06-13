#include "main.h"
#include <stdlib.h>

/**
 * free_grid - rees a 2 dimensional grid
 * @height: number of rows
 * @grid: 2d array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
