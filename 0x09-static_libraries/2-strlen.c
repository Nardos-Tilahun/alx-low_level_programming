#include "main.h"

/**
 * _strlen - prints a triangle, followed by a new line.
 * @s: triangle base and height
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
