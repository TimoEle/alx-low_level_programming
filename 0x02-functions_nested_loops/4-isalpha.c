#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Checks for alphabetic character
 * @c: Is an integer
 *
 * Return: 1 if the number is an alphabetic character and 0 if it is not
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
