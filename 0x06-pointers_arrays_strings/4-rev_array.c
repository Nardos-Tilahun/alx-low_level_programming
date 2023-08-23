#include "main.h"

/**
 * reverse_array - creverse the content
 * @a: first integer pointer parameter
 * @n: second integer parameter
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 1; i <= n / 2; i++)
	{
		temp = a[i - 1];
		a[i - 1] = a[n - i];
		a[n - i] = temp;
	}
}
