#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Entry point
 *
 * Description: Prints a struct dog
 * @d: pointer
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");

}
