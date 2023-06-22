#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: Checks for uppercase character
 * @c: integer
 *
 * Return: 1 if c is uppercase and 0 if it is not
 */

int _isupper(int c)
{
	
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
