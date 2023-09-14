#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @s: separator for constant character
 * @n: constant;
 */
void print_strings(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *sc;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sc = va_arg(args, char *);
		if (sc == NULL)
			printf("%s", "(nill)");
		else
			printf("%s", sc);
		if (s != NULL && i != (n - 1))
			printf("%s", s);
	}
	printf("\n");
	va_end(args);
}
