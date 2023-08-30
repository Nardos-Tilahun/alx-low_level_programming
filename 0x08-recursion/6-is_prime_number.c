#include "main.h"

/**
 * is_prime_other - factorial
 * @n: first integer
 * @m: second integer
 * Return: integer
 */
int is_prime_other(int n, int m)
{
	if (n == m && m != 2)
		return (1);
	else if (n % m == 0)
		return (0);
	return (is_prime_other(n, ++m));
}
/**
 * is_prime_number - factorial
 * @n: first integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_other(n, 2));
}
