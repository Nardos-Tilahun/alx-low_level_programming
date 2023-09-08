#include "main.h"
#include <stdlib.h>

/**
 * _puts - check the code.
 * @s: it counts argument
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _atoi - check the code.
 * @s: it counts argument
 * Return: Always 0.
 */

int _atoi(const char *s)
{
	int ss = 1;
	unsigned long int fn, i;
	unsigned long int r = 0;

	for (fn = 0; !(s[fn] >= 48 && s[fn] <= 57); fn++)
	{
		if (s[fn] == '-')
		{
			ss *= -1;
		}
	}
	for (i = fn; s[i] >= 48 && s[i] <= 57; i++)
	{
		r *= 10;
		r += (s[i] - 48);
	}
	return (ss * r);
}



/**
 * print_int - check the code.
 * @n: it counts argument
 */

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i, r;

	for (i = 0; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		r = n / d;
		_putchar('0' + r);
	}
}
/**
* main - check the code.
* @argc: it counts argument
* @argv: it shows the arguments string
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		print_int(_atoi(argv[1]) * _atoi(argv[2]));
		_putchar('\n');
	}
	else
	{
		_puts("Error\n");
		exit(98);
	}
	return (0);
}
