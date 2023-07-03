#include "main.h"

/**
 * _strstr - Entry point
 *
 * Description: locates a substring
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: Char pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr = '\0';

	char *s1, *s2;

	s1 = haystack;

	if (*needle != '\0')
	{
		while (*s1)
		{
			for (s2 = needle; (*s2 && *s1 == *s2 && *s2 != '\0'); s2++)
			{
				return (s1);
			}
			
			s1++;
		}
	}
	return (ptr);
}
