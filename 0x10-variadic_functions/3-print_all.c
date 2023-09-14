#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - check the code
 * @sc: separator for constant character
 */
void print_all(const char * const sc, ...)
{
	int i = 0;
	char ch, *s, *sp = "";
	va_list args;

	va_start(args, sc);
	if (*(sc + i) != '\0')
	{
		while (*(sc + i) != '\0')
		{
			ch = *(sc + i);
			switch (ch)
			{
			case 'c':
				printf("%s%c", sp, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sp, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sp, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s%s", sp,  s);
					break;
				}
				printf("%s%s", sp, "(nil)");
				break;
			default:
				i++;
				continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
