#include "main.h"

/**
 * _pow_recursion - power
 * @n: first integer
 * @m: second integer
 * Return: integer
 */
int _pow_recursion(int n, int m)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (n * _pow_recursion(n, m - 1));
}
