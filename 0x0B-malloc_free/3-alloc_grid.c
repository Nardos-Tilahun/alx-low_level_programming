#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create the array of specified number
 * @w: first unsigned integer parameter
 * @h: second character parameter
 * Return: pointer integer
 */
int **alloc_grid(int w, int h)
{
	int i, j;
	int **hp;

	if (w == 0 || h == 0)
		return (NULL);
	hp = (int **)malloc(sizeof(int *) * h);
	if (hp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < h; i++)
	{
		*(hp + i) = (int *)malloc(sizeof(int) * w);
		if (*(hp + i) == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(*(hp + j));
			free(hp);
			return (NULL);
		}
	}
	return (hp);
}
