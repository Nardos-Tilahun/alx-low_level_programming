#include "main.h"

/**
 * print_number - prints an integer.
 * @n: hold a number that will be printed
 */
void print_number(int n)
{
	long nt i, j, k;

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
