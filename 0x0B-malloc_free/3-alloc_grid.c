#include "main.h"

/**
 * alloc_grid - Entry point
 *
 * Description: Function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				grid[j] = NULL;
			}
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
