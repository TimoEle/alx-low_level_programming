#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: Prints the n times table
 *@n: integer
 *
 * Return: Void
 */

void print_times_table(int n)
{
	int num1, num2;

	if (!(n < 0) && (n < 16))
	{
		for (num1 = 0; num1 <= n; ++num1)
		{
			for (num2 = 0; num2 <= n; ++num2)
			{
				int mult = num1 * num2;

				if (num2 == 0)
				{
					printf("%d,", mult);
				}
				else if (num2 != 0)
					printf("%4d", mult);
				if ((num2 == n) || (num2 == 0))
					continue;
				printf(",");
			}
			printf("\n");
		}
	}
}
