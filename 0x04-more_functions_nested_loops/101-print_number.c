#include <stdio.h>

/**
 * main -prints the numbers, from 0 to 9, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3 == 0 || i % 5 == 0))
		{
			printf("%d", i);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("Buzz");
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
