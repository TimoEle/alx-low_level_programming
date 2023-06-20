#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: Prints the 9 times table
 *
 * Return: Void
 */

void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			int mult = num1 * num2;

			if (mult < 10)
			{
				_putchar(mult + '0');
				if (num2 == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				if (num2 == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
