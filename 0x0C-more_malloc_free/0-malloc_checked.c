#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - create the array of specified number
 * @b: unsigned operator parameter
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	if ((int)(b + 1) =< 0)
		exit(98);
	return (malloc(b));
}
