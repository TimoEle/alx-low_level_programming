#include "main.h"

/**
 * _memcpy -Entry point
 *
 * Descritption: Copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: Char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
