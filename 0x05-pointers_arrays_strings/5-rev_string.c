#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: Reverses a string
 * @s: pointer
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int i, length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		char holder = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = holder;
	}
}
