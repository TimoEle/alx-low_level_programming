#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: Prints every other character
 * @str: A pointer
 *
 * Return: Void
 */

void puts2(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
