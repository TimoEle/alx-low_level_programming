#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * Description: Executes on each element of an array
 * @array: pointer
 * @size: integer
 * @action: function pointer
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
