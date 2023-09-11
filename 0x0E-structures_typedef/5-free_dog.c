#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - check the code
 * @d: checking d
 */
void free_dog(dog_t *d)
{
	free((char*)d);
	free((int*)d + 8);
	free((char*)d + 16);
	free(d);
}
