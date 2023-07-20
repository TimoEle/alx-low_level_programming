#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * Description: Searches for an integer
 * @array:  pointer to an array
 * @size: integer
 * @cmp:  Funtion pointer
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
