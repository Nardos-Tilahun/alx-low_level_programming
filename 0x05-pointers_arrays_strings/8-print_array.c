#include "main.h"
#include <stdio.h>

/**
 * print_array -   prints n elements of an array of integers
 * @a: integer pointer that accept string
 * @n: integer value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		printf("%d, ", a[i - 1]);
	}
	if (i == n)
	{
		printf("%d", a[i - 1]);
	}
	putchar('\n');
}
