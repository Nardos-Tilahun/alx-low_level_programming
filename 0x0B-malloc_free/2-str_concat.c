#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  newly concatinated allocated space in memory
 * @s1: first character pointer argument
 * @s2: second character pointer argument
 * Return: pointer character
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size, s1s, s2s;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	s1s = i;
	s2s = j;
	size = s1s + s2s + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);

	}
	for (i = 0; i < s1s; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; s1s + j < size - 1; j++)
		*(ptr + s1s + j) = *(s2 + j);
	*(ptr + size - 1) = '\0';
	return (ptr);
}
