#include "main.h"

/**
 * _strspn - Entry point
 *
 * Description: Gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *s1, *s2;
	unsigned int count;

	s1 = s;
	count = 0;

	while (*s1)
	{
		for (s2 = accept; *s2; s2++)
		{
			if (*s1 == *s2)
			{
				break;
			}
		}
		if (!*s2)
		{
			return (count);
		}
		count++;
		s1++;
	}
	return (count);
}
