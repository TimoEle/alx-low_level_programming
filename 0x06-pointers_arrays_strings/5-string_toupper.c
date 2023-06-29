#include "main.h"

/**
 * string_toupper - Entry point
 *
 * Description: changes all lowercase letters of a string to uppercase
 * @s: pointer to a string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while  (*ptr != '\0')
	{
		if (*ptr >= 'a'  && *ptr <= 'z')
		{
			*ptr =  *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (s);
}
