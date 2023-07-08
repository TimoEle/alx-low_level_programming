#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Description: Multiplies two numbers
 * @argc: integer
 * @argv: pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
