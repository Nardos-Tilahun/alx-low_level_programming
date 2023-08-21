#include "main.h"

/**
 * puts_half -prints half of a string, followed by a new line
 * @s: character pointer that accept string
 */
void puts_half(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (--i >= 0)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
