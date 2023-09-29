#include "main.h"

/**
 * get_bit - check the code
 * @n: unisgned parameter
 * @idx: index
 * Return: Always integer sum.
 */
int get_bit(unsigned long int n, unsigned int idx)
{
	unsigned int i = 63;

	while (i)
	{
		i--;
		if (((n >> i) & 1) == 1)
			break;
	}
	if (i < idx)
		return (-1);
	else if ((n & (1 << idx)) != 0)
		return (1);
	return (0);
}
