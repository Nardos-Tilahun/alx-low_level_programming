#include "main.h"

/**
 * flip_bits - check the code
 * @n: unisgned parameter
 * @m: index
 * Return: Always integer sum.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int k = 0;

	k = n ^ m;
	while (i >= 0)
	{
		if (((k >> i) & 1))
			count++;
		i--;
	}
	return (count);
}
