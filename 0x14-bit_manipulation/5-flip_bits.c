#include "main.h"

/**
 * flip_bits - check the code
 * @n: unisgned parameter
 * @m: index
 * Return: Always integer sum.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 64, count = 0;
	unsigned long int k = 0;

	if (n == 0 && m == 0)
		return (k);
	else if (n == 0)
		k = (~m);
	else if (m == 0)
		k = (~n);
	else
		k = n ^ m;
	while (--i >= 0)
		if (((k >> i) & 1) != 0)
			count++;
	return (count);
}
