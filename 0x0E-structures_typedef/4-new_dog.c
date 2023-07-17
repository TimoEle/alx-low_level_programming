#include "dog.h"
#include <stdlib.h>

/**
 * string_length - Finds the lenght of a string
 * @str: pointer
 *
 * Return: int
 */

int string_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * copy_string - copies a string from one to another
 * @dest: destination string
 * @src: source string
 *
 * Return: Void
 */
void copy_string(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - entry point
 *
 * Description: creates a new dog
 * @name: member
 * @age: memebr
 * @owner: member
 *
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = string_length(name), owner_length = string_length(owner);
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((name_length + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	copy_string(new_dog->name, name);

	new_dog->owner = malloc((owner_length + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	copy_string(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
