#include "main.h"

/**
 * free_grid - Entry point
 *
 * Description: Free the dunamic allocate memory
 * @grid: Double pointer
 * @height: integer
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
