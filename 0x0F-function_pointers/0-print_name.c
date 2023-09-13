#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - create the array of specified number
 * @name: character pointer
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
	else
		exit(1);
}
