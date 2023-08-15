#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
