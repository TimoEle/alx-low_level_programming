#include "main.h"
/**
 * helper - assists in the calculation
 * @start: range
 * @end: range
 * @n: integer
 *
 * Return: squareroot
 */
int helper(int n, int start, int end)
{
	if (start <= end)
	{
		long int mid = start + (end - start) / 2;
		long int mid_square = mid * mid;

		if (mid_square == n)
		{
			return (mid);
		}
		else if (mid_square < n)
		{
			return (helper(n, mid + 1, end));
		}
		else
		{
			return (helper(n, start, mid - 1));
		}
	}

	return (-1);
}
/**
 * _sqrt_recursion - Entry point
 *
 * Descritpion: Calculates the natural squareroot of a number
 * @n: Integer
 *
 *
 * Return: -1 if n does not have a natural squareroot else the squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (helper(n, 1, n));
}
