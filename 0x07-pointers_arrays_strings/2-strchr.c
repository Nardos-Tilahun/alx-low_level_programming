#include "main.h"

/**
 * _strchr - concatinate two string
 * @s: first character pointer parameter
 * @c: second character parameter
 * Return: pointer character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
