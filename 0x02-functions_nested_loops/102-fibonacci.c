#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the first 50 fibonaccinumbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, n;

	unsigned long int fib1, fib2, fib_next;

	n = 50;

	fib1 = 1;
	fib2 = 2;

	printf("%lu, ", fib1);
	printf("%lu, ", fib2);

	for (i = 3; i <= n; i++)
	{
		fib_next = fib1 + fib2;

		printf("%lu", fib_next);

		if (i == 50)
			continue;
		printf(", ");

		fib1 = fib2;

		fib2 = fib_next;
	}
	printf("\n");
	return (0);
}
