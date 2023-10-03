#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: width paaraameter
 * @height: height parameter
 * Return: array and NULL for failure
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
				free(a[x]);

			free(a);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	}

	return (a);
}
