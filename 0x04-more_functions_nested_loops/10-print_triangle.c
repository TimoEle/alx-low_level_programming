#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: Draws a diagona line on the terminal
 * @size: Is an integer
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
