#include "main.h"
#include  <stdio.h>

/**
 * print_array  - Entry point
 *
 * Description: Prints n elements of an array of integers
 *  @a: Pointer
 *  @n: Integer
 *
 *  Return: Void
 */

void print_array(int *a, int n)
{
	for (n = 0; a[n] != '\0'; n++)
	{
		if (a[n] != '\0')
		{
			printf("%d, ", a[n]);
		}
	}
	printf("\n");
}
