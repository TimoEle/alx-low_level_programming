#include "main.h"

/**
 * _strchr - Entry point
 *
 * Description: Locates a character in a string.
 * @s: pointer
 * @c: character
 *
 * Return: Char pointer
 */

char *_strchr(char *s, char c)
{
	char *ptr = '\0';

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (ptr);
}
