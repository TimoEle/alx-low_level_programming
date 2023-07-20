#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * Description: Prints a name
 * @name: pointer
 * @f: function pointer
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		(*f)(name);
	}
}
