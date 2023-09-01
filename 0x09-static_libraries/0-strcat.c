#include "main.h"

/**
 * _strcat - concatinate two string
 * @dest: first character pointer parameter
 * @src: second character pointer parameter
 * Return: pointer character
 */
char *_strcat(char *dest, char *src)
{
	int i, n, m;

	for (n = 0; dest[n] != '\0'; n++)
	;
	for (m = 0; src[m] != '\0'; m++)
	;
	for (i = 0; i < m; i++)
	{
		dest[n + i] = src[i];
	}
	return (dest);
}
