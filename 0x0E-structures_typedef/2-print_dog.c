#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @d: checking d
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
