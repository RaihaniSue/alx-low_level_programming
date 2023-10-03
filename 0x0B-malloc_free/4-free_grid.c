#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - entry point
 * @grid: para one
 * @height: para two
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
