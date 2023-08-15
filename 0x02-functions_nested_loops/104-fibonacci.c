#include "main.h"
#include <stdio.h>

/**
 * main -   finds and prints the first 98 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long c, n = 0, m = 1, a = 2, nh1, mh1, nh2, mh2, h1, h2;

	while (a < 92)
	{
		c = m + n;
		printf("%lu, ", c);
		n = m;
		m = c;
		a++;
	}
	nh1 = n / 10000000000;
	nh2 = n % 10000000000;
	mh1 = m / 10000000000;
	mh2 = m % 10000000000;
	while (a > 91 && a <= 99)
	{
		h1 = nh1 + mh1;
		h2 = nh2 + mh2;
		if (h2 > 9999999999)
		{
			h1 = h1 + 1;
			h2 = h2 % 10000000000;
		}
		printf("%lu%lu", h1, h2);
		nh1 = mh1;
		nh2 = mh2;
		mh1 = h1;
		mh2 = h2;
		if (a != 99)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
	return (0);
}
