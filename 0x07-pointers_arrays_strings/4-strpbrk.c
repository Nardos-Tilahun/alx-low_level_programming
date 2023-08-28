#include "main.h"

/**
 * _strpbrk - concatinate two string
 * @s: first character pointer parameter
 * @b: second character pointer parameter
 * Return: pointer character
 */
char *_strpbrk(char *s, char *b)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (s[i] == b[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
