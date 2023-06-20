#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: Prints all natural numbers from n to 98
 *@n: An integer
 *
 * Return: Void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
