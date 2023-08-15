#include "main.h"
#include <stdio.h>

/**
 * main -  Write a program that prints the first 50 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a = 2, n = 1, m = 2;

	printf("1, 2, ");
	while (a < 50)
	{
		m = n + m;
		n = m;
		printf("%d, ", m);
		a++;
	}
	return (0);
}
