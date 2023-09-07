#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - create the array of specified number
 * @s1: first unsigned integer parameter
 * @s2: second character parameter
 * @c: unsigned integer
 * Return: pointer character
 */
char *string_nconcat(char *s1, char *s2, unsigned int c)
{
	int n = c;
	int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = (char *)malloc(sizeof(char) * len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
