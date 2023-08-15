#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int x, y, p;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			p = x * y;
			if (p < 10)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
