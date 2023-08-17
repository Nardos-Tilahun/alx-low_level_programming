#include "main.h"

/**
 * print_line -prints the numbers, from 0 to 9, followed by a new line
 * @n: that indicate how many times we will draw
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
