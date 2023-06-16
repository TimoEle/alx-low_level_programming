#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
