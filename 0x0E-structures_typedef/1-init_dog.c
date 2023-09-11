#include "dog.h"

/**
 * init_dog - check the code
 * @d: checking d
 * @name: nmae
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
