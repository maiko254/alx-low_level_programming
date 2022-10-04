#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated to 2 dimensional array of integers
 * @grid: pointer to 2 dimensional array of integers
 * @height: heigth of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
