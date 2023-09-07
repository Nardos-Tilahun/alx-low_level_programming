#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - create the array of specified number
 * @b: unsigned operator parameter
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	int  *p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
