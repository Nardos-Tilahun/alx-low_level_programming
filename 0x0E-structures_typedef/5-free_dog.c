#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - check the code
 * @d: checking d
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
