#include "main.h"
#include <stdio.h>

/**
 * main -  Write a program that prints the first 50 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a = 2, c, n = 2, m = 3;

	printf("1, 2, ");
	while (a < 50)
	{
		printf("%d, ", m);
		c = m;
		m = n + m;
		n = c;
		a++;
	}
	return (0);
}
