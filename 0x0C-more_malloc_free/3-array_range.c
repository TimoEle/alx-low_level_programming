#include "main.h"

/**
 * array_range - Entry point
 *
 * Description: Creates an array of integers
 * @min: integers
 * @max: max
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (min > max)
		return (NULL);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
