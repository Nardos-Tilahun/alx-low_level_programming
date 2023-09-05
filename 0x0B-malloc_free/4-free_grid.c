#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  newly allocated space in memory
 * @hp: integer pointer to pointer
 * @h: integer
 */
void free_grid(int **hp, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(*(hp + i));
	free(hp);
}
