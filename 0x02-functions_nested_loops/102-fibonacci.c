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
	int i, n, fib1, fib2;

	unsigned int fib_next;

	n = 50;
	fib1 = 1;
	fib2 = 2;

	printf("%d, ", fib1);
	printf("%d, ", fib2);

	for (i = 3; i <= n; i++)
	{
		fib_next = fib1 + fib2;

		printf("%u", fib_next);

		if (i == 50)
			continue;
		printf(", ");

		fib1 = fib2;

		fib2 = fib_next;
	}
	printf("\n");
	return (0);
}
