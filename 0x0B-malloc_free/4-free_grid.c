#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional array
 * @grid: double pointer
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
