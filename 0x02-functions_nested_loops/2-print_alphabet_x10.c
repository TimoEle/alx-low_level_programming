#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints the lowercase alphabet 10 times
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
