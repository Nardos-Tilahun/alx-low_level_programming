#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * * @n: an intiger that will be check sign of the number
 * Return: prints the last digit of a number.
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar('0' - a);
		return (-1 * a);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}
