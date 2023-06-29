#include "main.h"

/**
 * cap_string -  Entry point
 *
 * Description:  capitalizes all words of a string
 * @s: pointer to a string
 *
 * Return: pointer char
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int cap_next = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
				*ptr == ';' || *ptr == '.' || *ptr == '!' ||
				*ptr == '?' || *ptr == '"' || *ptr == '(' ||
				*ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - 'a' + 'A';
			}
			cap_next = 0;
		}
		ptr++;
	}

	return (s);
}
