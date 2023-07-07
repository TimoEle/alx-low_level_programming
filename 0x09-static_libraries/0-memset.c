#include "main.h"

/**
 * _memset - Entry point
 *
 * Description: Function that filss memory with a constant byte
 * @s: poinnnter
 * @b: character
 * @n: integer
 *
 * Return:  char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
