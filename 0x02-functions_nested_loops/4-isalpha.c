#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Checks if a number is lower case or not
 * @c: Is an integer
 *
 * Return: 1 if the number is lowercase and 0 if it is not
 */

int _islower(int c)
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
