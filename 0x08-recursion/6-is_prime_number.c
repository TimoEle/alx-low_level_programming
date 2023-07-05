#include "main.h"

/**
 * prime_recursive- Entry point
 *
 * Description: Checks if an integer is a prime number
 * @n: integer
 * @divisor: integer
 *
 * Return: 1 if it's a prime number else 0
 */

int prime_recursive(int n, int divisor)
{

	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Entry point
 *
 * Description: Calls the prime checker
 * @n: integer
 *
 * Return: function call
 */

int is_prime_number(int n)
{
	return (prime_recursive(n, n - 1));
}
