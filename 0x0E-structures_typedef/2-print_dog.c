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
		return;
	if (d->name == NULL)
		(d->name) = "(nil)";
	if (d->owner == NULL)
		(d->owner) = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
