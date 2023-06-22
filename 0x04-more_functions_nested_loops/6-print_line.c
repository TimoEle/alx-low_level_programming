#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Draws a straight line
 * @n: Is an integer
 *
 * Return: Void
 */

void print_line(int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
