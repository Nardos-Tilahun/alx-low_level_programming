#include "main.h"

/**
 * print_binary - check the code
 * @n: unisgned parameter
 * Return: Always integer sum.
 */
void print_binary(unsigned long int n)
{
	int i = 64;

	if (n == 0)
		_putchar('0');
	else
	{
		while (--i >= 0)
		{
			if (((n >> i) & 1) == 1)
			{
				_putchar('1');
				break;
			}
		}
		while (i--)
		{
			if (((n >> i) & 1) == 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
