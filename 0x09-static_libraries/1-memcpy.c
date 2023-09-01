#include "main.h"

/**
 * _memcpy - concatinate two string
 * @s: first character pointer parameter
 * @b: second character pointer parameter
 * @n: third unsigned integer parameter
 * Return: pointer character
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b[i];
	}
	return (s);
}
