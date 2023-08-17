#include <stdio.h>
#include <math.h>

/**
 * main -  largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long n = 612852475143, i, m;
	float s = sqrt(n);

	for (i = 1; i <= s; i++)
	{
		if (n % i == 0)
		{
			m = n / i;
		}
	}
	printf("%ld\n", m);
	return (0);
}
