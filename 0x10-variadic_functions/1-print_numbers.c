#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @s: separator for constant character
 * @n: constant;
 */
void print_numbers(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (s != NULL && i != n - 1)
			printf("%s", s);
	}
	printf("\n");
	va_end(args);
}
