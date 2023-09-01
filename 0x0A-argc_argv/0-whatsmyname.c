#include <stdio.h>

/**
 * main - check the code.
 * @argc: it counts argument
 * @argv: it shows the arguments string
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
