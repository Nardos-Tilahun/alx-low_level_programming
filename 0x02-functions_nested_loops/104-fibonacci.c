#include "main.h"
#include <stdio.h>

/**
 * main -   finds and prints the first 98 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long c, n = 2, m = 3;
	int a = 2;

	printf("1, 2, ");
	while (a < 98)
	{
		printf("%lu", m);
		if (a != 97)
		{
			printf(", ");
		}
		c = m;
		m = n + m;
		n = c;
		a++;
	}
	printf("\n");
	return (0);
}
