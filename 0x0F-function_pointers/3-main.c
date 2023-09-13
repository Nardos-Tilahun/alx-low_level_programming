#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - check if a number is equal to 98
 * @argc: the integer
 * @argv: pointer to pointer to char
 * Return: 0 Successful.
 */
int main(int argc, char **argv)
{
	char *o;
	int d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	if (!(o == NULL || *o == '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' || *o == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	d = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", d);
	return (0);
}
