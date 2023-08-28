#include "main.h"

/**
 * _strstr - concatinate two string
 * @s: first character pointer parameter
 * @b: second character pointer parameter
 * Return: pointer character
 */
char *_strstr(char *s, char *b)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == b[0])
			for (j = 0; b[j] != '\0'; j++)
				if (s[i + j] == b[j])
					if (b[j + 1] == '\0')
						return (s + i);
	return ('\0');
}
