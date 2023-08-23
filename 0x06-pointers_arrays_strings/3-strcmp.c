#include "main.h"

/**
 * _strcmp - concatinate two string
 * @s1: first character pointer parameter
 * @s2: second character pointer parameter
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		n = s1[i] - s2[i];
		break;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		n = s1[i] - s2[i];
	return (n);
}
