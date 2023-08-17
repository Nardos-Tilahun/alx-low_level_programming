#include "main.h"

/**
 * print_number - prints an integer.
 * @n: hold a number that will be printed
 */
void print_number(int n)
{
	int m = 1, i;

	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		while (n >= m)
		{
			m = m * 10;
		}
		while (m != 1)
		{
			m = m / 10;
			i = n / m;
			n = n % m;
			_putchar(i + '0');
		}
	}
}
