#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  newly allocated space in memory
 * @str: character pointer
 * Return: pointer character
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
		;
	size = i + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);

	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = *(str + i);
	}
	*(ptr + i) = '\0';
	return (ptr);
}
