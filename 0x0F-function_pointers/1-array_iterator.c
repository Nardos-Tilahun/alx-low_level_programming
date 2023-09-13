#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - create the array of specified number
 * @array: integer pointer
 * @size: size of the array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		exit(1);
	for (i = 0; i < size; i++)
		action(array[i]);
}
