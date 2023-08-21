#include "main.h"

/**
 * _strcpy - check the code
 * @dest: character
 * @src: character
 * Return: dest pointer character
 */
char *_strcpy(char *dest, char *src)
{
	int k, i = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (k = 0; k < i; k++)
	{
		*(dest + k) = *(src + k);
	}
	return (dest);
}
