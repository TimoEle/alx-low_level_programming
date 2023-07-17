#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creates three members
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Dog's owner, dog's name and age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
