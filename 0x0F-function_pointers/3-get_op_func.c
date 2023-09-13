#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - check if a number is equal to 98
 * @s: charcter array
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
