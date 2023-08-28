#include "main.h"

/**
 * _strspn - concatinate two string
 * @s: first character pointer parameter
 * @b: second character pointer parameter
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *b)
{
	unsigned int i, j, c = 0, max = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (b[i] == s[j])
			{
				if (j >= max)
					max = j;
				c++;
				break;
			}
		}
	}
	return (max + 1);
}
