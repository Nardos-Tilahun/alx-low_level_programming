#include "dog.h"
#include <stdio.h>

/**
 * new_dog - check the code
 * @name: nmae
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t C;
	struct Dog *DP = &C;

	DP->name = name;
	DP->age = age;
	DP->owner = owner;
	return (DP);
}
