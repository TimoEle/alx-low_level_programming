#include "main.h"

/**
 * _calloc - Entry point
 *
 * Description: Allocates memory for an array
 * @nmemb: integer
 * @size: integer
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	unsigned int i = 0, tot_size = nmemb * size;
	unsigned char *byte_ptr = (unsigned char *)ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);
	for (; i < tot_size; i++)
	{
		byte_ptr[i] = 0;
	}

	return (ptr);
}
