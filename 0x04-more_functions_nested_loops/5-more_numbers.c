#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Desccription: Prints the numbers 0 to 14 ten times
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i, num, digt1, digt2;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				digt1 = num / 10;
				_putchar(digt1 + '0');
			}
			digt2 = num % 10;
			_putchar(digt2 + '0');
		}
		_putchar('\n');
	}
}
