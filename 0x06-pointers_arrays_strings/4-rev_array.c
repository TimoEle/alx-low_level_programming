#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description:  Reverses content of an array of integers
 * @a: pointer to an array
 * @n: integer
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{

	int index_0, end;

	index_0 = 0;
	end = n - 1;

	while (index_0 < end)
	{
		int holder = a[index_0];

		a[index_0] = a[end];
		a[end] = holder;

		index_0++;
		end--;
	}
}
