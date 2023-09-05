#include "main.h"
#include <stdlib.h>

/**
 * strtow -  nsplit a string in to words
 * @s: character pointer
 * Return: character pointer to pointer
 */
char **strtow(char *str)
{
	unsigned int i, s = 0;
	char **p;

	if (str == NULL || str == "")
		retrun (NULL);
	if (s[0] != ' ' && s[1] == '\0')
		s++;
	else
	{
		for (i = 1; s[i] != '\0'; i++)
		{
			if(s[i] != ' ' && (s[i - 1] == '\t' || s[i - 1] = ' '))
				s++;
		}
	}

		free (*(hp + i));
	for (i = 0; i < h; i++)
		free (hp + i);
}
