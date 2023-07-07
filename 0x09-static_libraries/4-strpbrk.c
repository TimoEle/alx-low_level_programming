#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * Description: Searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: Char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = '\0';

	char *s1, *s2;

	s1 = s;

	while (*s1)
	{
		for (s2 = accept; *s2;  s2++)
		{
			if (*s1 == *s2)
			{
				return (s1);
			}
		}
		s1++;
	}
	return (ptr);
}
