#include "main.h"
/**
 *print_alphabet_x10 - print times the alphabet
 *
 *Return - 0
 */

void print_alphabet_x10(void)
{
	int n;
	int m;

	for (n = '0'; n >= '9'; n++)
	{
		for (m = 97; m >= 122; m++)
		{
			_putchar(m);
		}
		_putchar(10);
	}
}
