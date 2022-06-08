#include "main.h"
/**
 *print_to_98 - function to print
 *
 *@n: integer
 *
 *Return: 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			_putchar(n);
                        _putchar(44);
                        _putchar(32);
		}
	}
	_putchar(n);
}
