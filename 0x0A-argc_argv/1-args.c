#include <stdio.h>

/**
 * main - check the code.
 * @argc: it counts argument
 * @argv: it shows the arguments string
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
