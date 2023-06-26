#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: Swaps the values of two integers
 * @a: a pointer
 * @b: a pointer
 *
 * Return: Void
 *
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
