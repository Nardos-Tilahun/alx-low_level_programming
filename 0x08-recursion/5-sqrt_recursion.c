#include "main.h"

/**
 * sqrt_other - square root
 * @n: first integer
 * @m: hold the integer number
 * Return: integer
 */

int sqrt_other(int n, int m)
{
	if (m == 1)
		return (1);
	else if (n * n < m)
		return (sqrt_other(n + 1, m));
	else if (n * n == m)
		return (n);
	else
		return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - square root
 * @n: first integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_other(1, n));
}
