#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: integer
 * @argv: pointer to pointer that point to character
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *a;
	int i, len;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	len = atoi(argv[1]);
	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;
	for (i = 0; i < (len - 1); i++)
		printf("%02hhx ", a[i]);
	printf("%02hhx\n", a[i]);
	return (0);
}
