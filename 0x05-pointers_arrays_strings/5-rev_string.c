#include "main.h"

/**
 * rev_string -  prints a string, in reverse followed by a new line, to stdout.
 * @s: character pointer that accept string
 */
void rev_string(char *s)
{
	int i = 0, j, k, len;
	char *tem = s;

	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;
	tem = s - len;
	for (j = 1; j <= len; j++)
	{
		*(tem + j - 1) = *(s + --i);
	}
	*(tem + j) = *(s + j);
	for (k = 0; k < len; k++)
	{
		*(s + k) = *(tem + k);
	}
}
