#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: Function that prints a string followed by a new line
 * @str: pointer to a string
 *
 * Return: Void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
