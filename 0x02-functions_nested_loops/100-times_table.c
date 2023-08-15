#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n: an intiger that will be check for the absolute
 */
void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					printf("0");
				}
				else if (i * j < 10)
				{
					printf("  %d", i * j);
				}
				else if (i * j < 100)
				{
					printf(" %d", i * j);
				}
				else
				{
					printf("%d", i * j);
				}
				if (j != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}

