#include "main.h"

/**
 * main -Entry point
 *
 * Description: Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[10] = "_putchar\n";

	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
