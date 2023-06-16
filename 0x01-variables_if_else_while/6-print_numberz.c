#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for  (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
