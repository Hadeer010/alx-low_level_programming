#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2 diminsion grid
 * @grid: 2d grid
 * @height: height
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
