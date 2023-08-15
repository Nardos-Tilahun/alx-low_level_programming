#include "main.h"
#include <stdio.h>

/**
 * main -  Write a program that prints the first 50 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	long a = 2, c, n = 2, m = 3;

	printf("1, 2, ");
	while (a < 50)
	{
		printf("%ld", m);
		if (a != 49)
		{
			printf(", ");
		}
		c = m;
		m = n + m;
		n = c;
		a++;
	}
	return (0);
}
