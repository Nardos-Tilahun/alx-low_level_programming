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
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
				if (*(argv[i] + j) < 48 || *(argv[i] + j) > 58)
				{
					printf("Error\n");
					return (0);
				}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
