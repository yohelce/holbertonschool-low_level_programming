#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: grid created previously
 * @height: height of 2D array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
