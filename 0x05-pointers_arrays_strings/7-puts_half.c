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
	int indx, half;

	indx = 0;

	while (str[indx] != '\0')
	{
		indx++;
	}

	half = indx / 2;

	if (indx % 2 == 1)
		half++;
	
	while(half < indx)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
