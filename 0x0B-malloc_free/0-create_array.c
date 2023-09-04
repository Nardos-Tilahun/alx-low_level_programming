#include "main.h"
#include <stdlib.h>

/**
 * create_array - create the array of specified number
 * @size: first unsigned integer parameter
 * @c: second character parameter
 * Return: pointer character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
