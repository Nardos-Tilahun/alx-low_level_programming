#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9, followed by a new line.
 */
void more_numbers(void)
{
	int i, j, c;

	for (c = 0; c < 10; c++)
	{
		i = 0;

		while (i < 2)
		{
			for (j = 48; j <= 57; j++)
			{
				if (i == 1 && j <= 52)
				{
					_putchar(49);
				}
				if (!(i == 1 && j > 52))
				{
					_putchar(j);
				}
			}
			i++;
		}
		_putchar('\n');
	}
}
