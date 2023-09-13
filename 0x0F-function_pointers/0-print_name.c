#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - create the array of specified number
 * @name: character pointer
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
