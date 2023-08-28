#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - concatinate two string
 * @s: integer parameter
 * @n: third unsigned integer parameter
 */
void print_diagsums(int *s, int n)
{
	int i, j, sum1 = 0, sum2 = 0, k;

	for (i = 0, k = 0; i < n; i++)
	{
		for (j = 0; j < n; j++, k++)
		{
			if (i == j)
			{
				sum1 += s[k];
			}
		}
	}
	for (i = n - 1, k = 0 ; i >= 0; i--)
	{
		for (j = 0; j < n; j++, k++)
		{
			if (i == j)
			{
				sum2 += s[k];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
