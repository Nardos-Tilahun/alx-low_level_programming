#include "main.h"

/**
 * rev_string -  prints a string, in reverse followed by a new line, to stdout.
 * @s: character pointer that accept string
 */
void rev_string(char *s)
{
	int i = 0, j, len;
	char tem = *s;

	while (*(s + i) != '\0')
	{
		i++;
	}
	len = --i;
	for (j = 0; j <= len / 2; j++)
	{
		tem = *(s + j);
		*(s + j) = *(s + len - j);
		*(s + len - j) = tem;
	}
}
