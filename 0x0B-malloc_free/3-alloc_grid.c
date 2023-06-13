#include <stdlib.h>

/**
 * fr_grid - frees a 2d array
 * @grid: The grind to free
 * @height: height of the array
 * Return: Nothing
 */
void fr_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;
	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}

/**
 * alloc_grid - created a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
	{
		fr_grid(grid, height);
		return (NULL);
	}

	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			fr_grid(grid, height);
			return (NULL);
		}

		for (j = 0; j < width; ++j)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
