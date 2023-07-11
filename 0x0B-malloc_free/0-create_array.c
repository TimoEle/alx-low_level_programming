#include "main.h"

/**
 * create_array - Entry point
 *
 * Description: Creates an array
 * @size: unsigned integer
 * @c: char
 *
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;

	chars = malloc(sizeof(char) * size);


	if (size == 0)
	{
		return (NULL);
	}

	if (chars == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		chars[i] = c;
	}

	return (chars);
}
