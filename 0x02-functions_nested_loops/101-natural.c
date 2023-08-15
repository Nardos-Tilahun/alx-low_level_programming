#include "main.h"
#include <stdio.h>

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n = 3, sum = 0;

	while (n < 1024)
	{
		if ((n % 5 == 0) || (n % 3 == 0))
		{
			sum = sum + n;
		}
		n++;
	}
	printf("The sum of these multiples is %d\n", sum);
	return (0);
}
