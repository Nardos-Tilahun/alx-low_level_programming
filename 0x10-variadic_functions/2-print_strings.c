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
	for (i = 0; i < n - 1; i++)
	{
		sc = va_arg(args, char *);
		if (s != NULL)
		{
			if (sc == NULL)
				printf("%s%s", "(nil)", s);
			else
				printf("%s%s", sc, s);
		}
		else
		{
			if (sc == NULL)
				printf("%s", "(nill)");
			else
				printf("%s", sc);
		}
	}
	sc = va_arg(args, char *);
	if (sc == NULL)
		printf("%s\n", "(nil)");

	else
		printf("%s\n", sc);
	va_end(args);
}
