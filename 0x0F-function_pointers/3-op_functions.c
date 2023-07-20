#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: integer
 * @b: integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: integer
 * @b: integer
 *
 * Return: subtration
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer
 * @b: integer
 *
 * Return: division
 */

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulus of two integers
 * @a: integer
 * @b: integer
 *
 * Return: Modulus
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
