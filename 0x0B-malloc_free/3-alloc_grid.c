#include <stdlib.h>

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

	grid = (int **) malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
			return (NULL);

		for (j = 0; j < width; ++j)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
