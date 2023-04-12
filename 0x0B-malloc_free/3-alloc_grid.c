#include "main.h"

/**
 * alloc_grid - eturns a pointer to a 2 dimensional array of integers
 * @width: first param
 * @height: second param
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);

}
