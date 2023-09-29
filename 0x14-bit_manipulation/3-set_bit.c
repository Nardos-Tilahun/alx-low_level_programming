#include "main.h"

/**
 * set_bit - check the code
 * @n: unisgned parameter
 * @idx: index
 * Return: Always integer sum.
 */
int set_bit(unsigned long int *n, unsigned int idx)
{
	unsigned int i = 63;

	while (i)
	{
		i--;
		if (((*n >> i) & 1) == 1)
			break;
	}
	if (idx > 63 || *n != 0)
		return (-1);
	*n = (*n | (1 << idx));
	return (1);
}
