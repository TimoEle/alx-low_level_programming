#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 *
 * Descritpion: free memory allocated by malloc
 * @d: pointer
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);

	free(d->owner);

	free(d);
}
