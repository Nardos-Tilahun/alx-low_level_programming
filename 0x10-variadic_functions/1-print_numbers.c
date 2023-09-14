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
	for (i = 0; i < n - 1; i++)
		if (s != NULL)
			printf("%d%s", va_arg(args, int), s);
		else
			printf("%d", va_arg(args, int));
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
