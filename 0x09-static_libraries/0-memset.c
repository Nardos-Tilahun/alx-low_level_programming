#include "main.h"

/**
 * _memset - concatinate two string
 * @s: first character pointer parameter
 * @b: second character parameter
 * @n: third unsigned integer parameter
 * Return: pointer character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
