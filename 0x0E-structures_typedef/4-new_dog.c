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
	int i, j;
	dog_t *dP;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	dP = malloc(sizeof(dog_t));
	if (dP == NULL)
		return (NULL);
	dP->name = malloc(sizeof(char) * (i + 1));
	if (dP->name == NULL)
	{
		free(dP);
		return (NULL);
	}
	dP->owner = malloc(sizeof(char) * (j + 1));
	if (dP->owner == NULL)
	{
		free(dP);
		free(dP->name);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		dP->name[i] = name[i];
	dP->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		dP->owner[j] = owner[j];
	dP->owner[j] = '\0';
	dP->age = age;
	return (dP);
}
