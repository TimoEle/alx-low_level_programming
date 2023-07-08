#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * add_positive_integers - Entry point
 *
 * Description: adds two positive integers
 * @argc: integer
 * @argv: pointer
 *
 * Return: sum
 */

int add_positive_integers(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		while (*num != '\0')
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}
		sum += atoi(argv[i]);
	}
	return (sum);
}

/**
 * main -Entry point
 *
 * Description: adds two numbers
 * @argc: integer
 * @argv: pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int total = add_positive_integers(argc, argv);

		if (total != 1)
		{
			printf("%d\n", total);
		}
	}
	return (0);
}
