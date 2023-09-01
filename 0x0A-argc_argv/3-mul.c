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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	return (0);
}
