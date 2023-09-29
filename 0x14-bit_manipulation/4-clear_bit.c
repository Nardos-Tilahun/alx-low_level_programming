#include "main.h"

/**
 * clear_bit - check the code
 * @n: unisgned parameter
 * @idx: index
 * Return: Always integer sum.
 */
int clear_bit(unsigned long int *n, unsigned int idx)
{
	unsigned int i = 63;

	while (i)
	{
		i--;
		if (((*n >> i) & 1) == 1)
			break;
	}
	if (i < idx && *n != 0)
		return (-1);
	*n = (*n & (~(1 << idx)));
	return (1);
}
