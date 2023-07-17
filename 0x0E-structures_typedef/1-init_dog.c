#include "dog.h"

/**
 * init_dog - Entry point
 *
 * Description: Initializes variable of type struct dog
 * @d: pointer
 * @name: Member
 * @age: member
 * @owner: Member
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
