#include "main.h"

/**
 * puts_half -prints half of a string, followed by a new line
 * @s: character pointer that accept string
 */
void puts_half(char *s)
{
	int n, len, i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	len = --i;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n ; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
