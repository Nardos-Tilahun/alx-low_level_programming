#include <stdio.h>

/**
 * main -  largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143, i, j, c;

	for (i = 2; i <= n; i++)
	{
		c = 0;
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				c++;
			}
		}
		if (c == 1)
		{
			while (n % i == 0)
			{
				n = n / i;
			}
		}
	}
	printf("%ld", i - 1);

	return (0);
}
