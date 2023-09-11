#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (DP == NULL)
		return (malloc(sizeof(dog_t));
	DP->name = name;
	DP->age = age;
	DP->owner = owner;
	return (DP);
}
