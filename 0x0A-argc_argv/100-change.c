#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: it counts argument
 * @argv: it shows the arguments string
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, n, sum, b[5];
	int a[] = {25, 10, 5, 2, 1};

	sum = 0;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			for (i = 0; i < 5; i++)
			{
				b[i] = n / a[i];
				n %= a[i];
			}
			for (i = 0; i < 5; i++)
				sum += b[i];
			printf("%d\n", sum);
		}
		else
		{
			printf("%d\n", 0);
			return (0);
		}
	}
	else
		printf("Error\n");
	return (0);
}
