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

	for (index = 0; str[index] != '\0'; index += 2)
	{
		if (str[index] == '\0')
			continue;
		_putchar(str[index]);
	}
	_putchar('\n');
}
