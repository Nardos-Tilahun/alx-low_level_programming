#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - create the array of specified number
 * @b: unsigned operator parameter
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	int n = b + 1;
	char *p;

	if (n < 0)
		exit(98);
	p = malloc(b);
	return (p);
}
