#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - create the array of specified number
 * @array: integer pointer
 * @size: size of the array
 * @cmp: pointer function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return(-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
