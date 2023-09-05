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
	int i;

	for (i = 0; i < h; i++)
		free(*(hp + i));
	for (i = 0; i < h; i++)
		free(hp + i);
}
