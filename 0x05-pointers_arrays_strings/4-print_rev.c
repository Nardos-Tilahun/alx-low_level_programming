#include "main.h"

/**
 * print_rev -  prints a string, in reverse followed by a new line, to stdout.
 * @s: character pointer that accept string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + ++i) != '\0')
	{
	}
	while (--i >= 0)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
