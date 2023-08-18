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
			_putchar(45);
		}
		while (n / 10 >= m)
		{
			m = m * 10;
		}
		while (m != 0)
		{
			i = n / m;
			n = n % m;
			_putchar(i + '0');
			m = m / 10;
		}
	}
}
