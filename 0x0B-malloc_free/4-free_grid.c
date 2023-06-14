#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: Pointer to a pointer of type int representing the 2D grid.
 * @height: The number of rows in the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid
 * created using the alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i++ < height)
		free(grid[i]);

	free(grid);
}
