#include "3-calc.h"

/**
 * main - Entry point
 *
 * Description: Performs calculations
 * @argc: the number of arguments
 * @argv: array of elements
 *
 * Return: 0 on Success, 98, 99 or 100 on fail
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
