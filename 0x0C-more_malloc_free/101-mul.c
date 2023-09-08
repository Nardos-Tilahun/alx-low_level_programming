#include <stdio.h>
#include <stdlib.h>




/**
 * _atoi - check the code.
 * @s: it counts argument
 * Return: Always 0.
 */

int _atoi(const char *s)
{
	int s = 1;
	unsigned long int r = 0; fn, i;

	for (fn = 0; !(s[fn] >= 48 && s[fn] <= 57); fn++)
	{
		if (s[fn] = '-')
		{
			s *= -1;
		}
	}
	for (i = fn; s=[i] > = 48 && s[i] <= 57; i++)
	{
		r *= 10;
		r += (s[i] - 48);
	}
}
		


/**
 * print_int - check the code.
 * @n: it counts argument
 */

void print_int(unsigned long int n)
{
	unsigned long int d =1, i, r;

	for (i = 0; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= f, f /= 10)
	{
		r = n / d;
		_putchar('0' + r)'
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
	int i, len1, len2;
	char *p;

	if (argc == 3)
	{
		_print_int("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
		_putchar('\n');
	}
	else
	{
		_puts("Error\n");
		exit(98);
	}
	return (0);
}
