#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: Prints a string from halfway
 * @str: pointer
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int i, length, index1;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		index1 = length / 2;
	}
	else
	{
		index1 = (length - 1) / 2;
	}

	for (i = index1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
