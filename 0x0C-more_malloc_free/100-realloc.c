#include "main.h"
#include <stdlib.h>

/**
 * _realloc - create the array of specified number
 * @ptr: first unsigned integer parameter
 * @os: second character parameter
 * @ns: third integer parameter
 * Return: pointer character
 */
void *_realloc(void *ptr, unsigned int os, unsigned int ns)
{
	unsigned int i;
	char *p;

	if (ns == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ns == os)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(ns);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (ns > os)
	{
		p = malloc(ns);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < ns && i < os; i++)
			*(p + i) = *((char*)ptr + i);
		free(ptr);
	}
	return (p);
}
