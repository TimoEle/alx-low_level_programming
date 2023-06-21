#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = i + sum;
		if (i == 1023)
			printf("%d", sum);
	}
	printf("\n");
	return (0);
}
