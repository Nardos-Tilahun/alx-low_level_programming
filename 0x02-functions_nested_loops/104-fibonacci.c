#include "main.h"
#include <stdio.h>

/**
 * main -   finds and prints the first 98 Fibonacci numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long c, n = 2, m = 3, a = 2, nh1, mh1, nh2, mh2, h1, h2;

	printf("1, 2, ");
	while (a < 97)
	{
		if (a < 92)
		{
			printf("%lu", m);
			c =  m;
			m = m + n;
			n = c;
		}
		if (a > 93)
		{
			nh1 = n / 10000000000;
			nh2 = n % 10000000000;
			mh1 = m / 10000000000;
			mh2 = m % 10000000000;
			h1 = nh1 + mh1;
			h2 = nh2 + mh2;
			if (h2 > 9999999999)
			{
				h1 = nh1 + 1;
				h2 = h2 % 10000000000;
			}
			printf("%lu%lu", h1, h2);
			nh1 = mh1;
			nh2 = mh2;
			mh1 = h1;
			mh2 = h2;
		}
		if (a != 97)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
	return (0);
}
