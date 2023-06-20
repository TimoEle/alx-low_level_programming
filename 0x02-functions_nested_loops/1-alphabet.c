#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Prints alphabet in lowercase
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

}
