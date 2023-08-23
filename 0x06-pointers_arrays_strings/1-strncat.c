#include "main.h"

/**
 * _strncat - concatinate two string
 * @dest: first character pointer parameter
 * @src: second character pointer parameter
 * @n: third integer parameter
 * Return: pointer character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, m;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (m = 0; src[m] != '\0'; m++)
		;
	if (m < n)
	{
		n = m;
	}
	for (i = 0; i < n; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
