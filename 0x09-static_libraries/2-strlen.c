#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description:  Returns the length of a string
 * @s: pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
