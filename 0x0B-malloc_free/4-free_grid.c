#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees 2d grid
 *@grid: 2d grid
 *@height: input value
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
