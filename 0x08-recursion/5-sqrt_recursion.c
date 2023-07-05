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
	int mid = (start + end) / 2;

	if (start > end)
	{
		return (-1);
	}

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (helper(n, start, mid - 1));
	}
	else
	{
		return (helper(n, mid + 1, end));
	}
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
