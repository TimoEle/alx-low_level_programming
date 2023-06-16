#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alphabet;

	lower_alphabet = 'a';

	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);
		lower_alphabet++;
	}
	putchar('\n');
	return (0);
}
