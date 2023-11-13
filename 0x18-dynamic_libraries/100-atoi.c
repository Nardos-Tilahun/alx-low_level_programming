#include "main.h"

/**
 * _atoi -  prints a string, in reverse followed by a new line, to stdout.
 * @s: character pointer that accept string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, j = 1;
	unsigned int n = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
		{
			j *= -1;
		}
		else if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			n = n * 10 + (*(s + i) - '0');
		}
		else if (n != 0)
		{
			break;
		}
		i++;
	}
	return (n * j);
}
