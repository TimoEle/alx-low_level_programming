#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: Prints the last digit of an integer
 * @n: integer
 *
 * Return: The last digit of the integer
 */

int print_last_digit(int n)
{

	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
