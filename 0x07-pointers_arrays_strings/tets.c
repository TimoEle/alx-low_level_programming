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

	int i, j;

	j = 0;


	while (needle[j] != '\0')
		j++;
	
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (ptr);
}
