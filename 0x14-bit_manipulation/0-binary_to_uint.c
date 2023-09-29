#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: unisgned parameter
 * Return: Always integer sum.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k, l, m, sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(b[i] == '1' || b[i] == '0'))
			return (0);
	}
	for (j = 0, k = i; b[j] != '\0'; j++, k--)
	{
		for (l = 1, m = 1; l < k; l++)
			m *= 2;
		sum += ((b[j] - 48) * m);
	}
	return (sum);
}
