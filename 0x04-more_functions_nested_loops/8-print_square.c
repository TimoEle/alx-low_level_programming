#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: Draws a diagona line on the terminal
 * @size: Is an integer
 *
 * Return: Void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
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
