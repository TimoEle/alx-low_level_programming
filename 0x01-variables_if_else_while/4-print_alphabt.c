#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'e') && (alphabet != 'q'))
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
