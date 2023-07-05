#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: calculates the power
 * @x: integer
 * @y: integer
 *
 * Return: -1 if y i lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
