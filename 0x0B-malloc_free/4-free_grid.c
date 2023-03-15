#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Allocates a grid
 *@grid: width or rows of grid
 *@height: height of grid
 * Return: a pointer to a 2 dimensional array of integers
 * or null
 */

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
