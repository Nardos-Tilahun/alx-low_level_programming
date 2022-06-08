#include "main.h"

/**
 *main - we start by printing small alphabet from a to z
 *
 *
 *Return: 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar("\n");
}
