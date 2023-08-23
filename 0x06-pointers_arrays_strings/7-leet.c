#include "main.h"

/**
 * leet - concatinate two string
 * @s: second character pointer parameter
 * Return: pointer character
 */
char *leet(char *s)
{
	int i, j;
	char a[] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10;  j += 2)
		{
			if (s[i] == a[j] || s[i] == (a[j] - 32))
			{
				s[i] = a[j + 1];
			}
		}
	}
	return (s);
}
