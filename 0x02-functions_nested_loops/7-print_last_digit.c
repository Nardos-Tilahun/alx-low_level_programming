#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * * @n: an intiger that will be check sign of the number
 * Return: prints the last digit of a number.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = n * -1;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
