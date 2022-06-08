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
	int m = n;

	if (m > 98)
	{
		for (; m > 98; m--)
		{
			_putchar((m) + 48);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (m < 98)
	{
		for (; m < 98; m++)
		{
			_putchar((m) + 48);
                        _putchar(44);
                        _putchar(32);
		}
	}
	else
	{
		_putchar(m);
	}
}
