#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create the array of specified number
 * @n: first unsigned integer parameter
 * @s: second character parameter
 * Return: pointer character
 */
void *_calloc(unsigned int n, unsigned int s)
{
	unsigned int i;
	char *p;

	if (n == 0 || s == 0)
		return (NULL);
	p  = malloc(n * s);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (n * s); i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
