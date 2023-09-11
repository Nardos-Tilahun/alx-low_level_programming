#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @d: checking d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
