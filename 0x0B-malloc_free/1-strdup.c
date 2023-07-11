#include "main.h"

/**
 * _strdup - Entry point
 *
 * Descritpion: Returns a pointer to a newly allocated space
 * @str: pointer
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *dup;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
