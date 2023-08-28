#include "main.h"

/**
 * _strspn - concatinate two string
 * @s: first character pointer parameter
 * @b: second character pointer parameter
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *b)
{
	unsigned int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (s[i] == b[j])
			{
				c++;
				break;
			}
			if (s[i] != b[j] && b[j + 1] == '\0')
			{
				return (c);
			}
		}
	}
	return (c);
}
