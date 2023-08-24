#include "main.h"

/**
 * rot13 - concatinate two string
 * @s: second character pointer parameter
 * Return: pointer character
 */
char *rot13(char *s)
{
	int i, j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
