#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: triangle base and height
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= size - i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
