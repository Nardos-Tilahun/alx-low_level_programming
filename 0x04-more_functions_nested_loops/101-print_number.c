#include "main.h"

/**
 * print_number - prints an integer.
 * @n: hold a number that will be printed
 */
void print_number(int n)
{
	int m = n;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		m = n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar( n % 10 + '0');
}
