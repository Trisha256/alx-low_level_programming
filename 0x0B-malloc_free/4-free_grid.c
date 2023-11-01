#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @height: height of the 2 dimensinal grid
 * @grid: the grid to be freed
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
