#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: factorial of a given number
 * @n: integer
 *
 * Return: -1 if n is less than 0, 1 if it's 0 else n's factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
