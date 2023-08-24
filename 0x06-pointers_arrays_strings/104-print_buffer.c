#include "main.h"
#include <stdio.h>

/**
 * print_buffer - concatinate two string
 * @b: second character pointer parameter
 * @s: size
 */
void print_buffer(char *b, int s)
{
	int i, j;
	char t;

	if (s <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < s; i += 10)
	{
		printf("%08x:", i);
		for (j = 0; j < 10; j++)
		{
			if (j % 2 == 0)
			{
				printf(" ");
			}
			if (i + j > 125)
			{
				printf("         ");
				break;
			}
			printf("%02x", *(b + i + j));
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j >= s)
				break;
			t = *(b + i + j);
			if (t >= 32 && t < 126 && t != 47 && t != 10)
				printf("%c", t);
			else
				printf("%c", 46);
		}
		printf("\n");
	}
}
