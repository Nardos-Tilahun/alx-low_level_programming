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
		printf("Last digit of %d is r and is greater than 5", r);
	}
	else if (r == 0)
	{
		printf("Last digit of %d is r and is 0", r);
	}
	else
	{
		printf("Last digit of %d is r and is less than 6 and not 0", r);
	}
	return (0);
}
