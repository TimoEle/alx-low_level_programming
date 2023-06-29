#include "main.h"

/**
 * _strcmp -  Entry point
 *
 * Description: Compares two strings
 * @sr1: pointer
 * @sr2: pointer
 *
 * Return: integer
 */

int _strcmp(char *sr1,  char *sr2)
{
	while (*sr1 && (*sr1 == *sr2))
	{
		sr1++;
		sr2++;
	}

	return (*(unsigned char  *)sr1 - *(unsigned char *)sr2);
}
