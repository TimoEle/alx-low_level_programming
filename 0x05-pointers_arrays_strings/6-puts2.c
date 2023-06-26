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

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
