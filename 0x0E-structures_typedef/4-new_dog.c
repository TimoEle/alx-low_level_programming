#include "dog.h"
#include <stdlib.h>

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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
