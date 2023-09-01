#include "main.h"

/**
 * _strncpy - concatinate two string
 * @dest: first character pointer parameter
 * @src: second character pointer parameter
 * @n: third integer parameter
 * Return: pointer character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, m;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (m = 0; src[m] != '\0'; m++)
		;
	if (m >= n)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else if (m < n)
	{
		for (i = 0; i < j; i++)
		{
			if (i < m)
				dest[i] = src[i];
			else if (i < n)
				dest[i] = '\0';
		}
	}
	return (dest);
}
