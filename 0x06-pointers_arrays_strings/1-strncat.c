#include "main.h"

/**
 * _strncat - Entry point
 *
 * Description: Concatenates two strings to the nth
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
