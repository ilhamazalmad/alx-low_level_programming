#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: first param
 * @height: second param
 *
 * Return: int
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);

}
