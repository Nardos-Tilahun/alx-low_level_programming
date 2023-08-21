#include "main.h"

/**
 * puts_half -prints half of a string, followed by a new line
 * @s: character pointer that accept string
 */
void puts_half(char *s)
{
	int n, i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = i / 2 - 1;
	}
	for (i = n ; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
