#include "main.h"

/**
 * _strcat -Entry point
 *
 * Description: Concatenates two strings
 * @dest: pointer
 * @src: pointer
 *
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	char *ptr =  dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src  != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
