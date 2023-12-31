#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using Conditional statements
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDgt;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDgt = n % 10;

	if ((lastDgt < 6) && (lastDgt != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	else if (lastDgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	return (0);
}
