#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * Frees the memory allocated for a 2D grid.
 *
 * @param grid   Pointer to a pointer of type int representing the 2D grid.
 * @param height The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
