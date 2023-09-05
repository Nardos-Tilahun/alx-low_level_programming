#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  newly allocated space in memory
 * @ac: integer
 * @av: character pointer
 * Return: character pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, s = 0, r = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s++;
		for (j = 0; *(av[i] + j) != '\0'; j++)
			s++;
	}
	p = (char *)malloc(sizeof(char) * ++s);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++, r++)
			*(p + r) = *(av[i] + j);
		*(p + r++) = '\n';
	}
	*(p + r) = '\0';
	return (p);
}
