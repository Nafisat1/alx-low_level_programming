#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 2 dimensional grid previously created by alloc_grid function
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
