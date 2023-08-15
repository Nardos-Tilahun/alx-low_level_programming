#include "main.h"
#include <stdio.h>

/**
 * main -  Write a program that prints the first 50 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	long sum = 2, c, n = 2, m = 3;

	while (m < 4000000)
	{
		if (m % 2 == 0)
		{
			sum = sum + m;
		}
		c = m;
		m = n + m;
		n = c;
	}
	printf("%ld\n", sum);
	return (0);
}
