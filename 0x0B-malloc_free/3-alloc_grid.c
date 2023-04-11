#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);

		if (grid[w] == NULL)
		{
			for (; w >= 0; w--)
				free(grid[w]);

			free(grid);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			grid[w][h] = 0;
	}

	return (grid);
}
