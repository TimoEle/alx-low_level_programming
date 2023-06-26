#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: prints  a string in reverse followed by a new line
 * @s: pointer
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i, length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
