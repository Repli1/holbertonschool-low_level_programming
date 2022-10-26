#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 *
 * @grid: It's a grid!
 *
 * @height: It's an integer!
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
