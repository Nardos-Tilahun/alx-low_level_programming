#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}
	return (0);
}
