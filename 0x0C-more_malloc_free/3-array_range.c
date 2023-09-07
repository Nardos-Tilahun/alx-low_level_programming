#include "main.h"
#include <stdlib.h>

/**
 * array_range - create the array of specified number
 * @min: first unsigned integer parameter
 * @max: second character parameter
 * Return: pointer character
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);
	p = (int *) malloc(sizeof(int) * (max - min + 2));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		*(p + j) = i;
	*(p + j) = '\0';
	return (p);
}
