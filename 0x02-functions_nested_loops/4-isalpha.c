#include "main.h"

/**
 *_isalpha - show its a letter
 *letter or another case its shows
 * 0
 *
 * @c: -> iTnt character in ASCII table
 *
 *Return: int 1 is letter 0 is not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
