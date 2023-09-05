#include "main.h"
#include <stdlib.h>

/**
 * helpfun -  nsplit a string in to words
 * @s: character pointer
 * @p: pointer to pointer to character
 * Return: character pointer to pointer
 */
char **helpfun(char **p, char *s)
{

	unsigned int i, j, d = 0, x = 0;

	for (j = 0; !(s[j] == ' ' || s[j] == '\t') ; j++)
		;
	if (j != 0)
	{
		*p = (char *)malloc(sizeof(char) * (j + 1));
		if (*p == NULL)
			return (NULL);
		for (d = 0; !(s[d] == ' ' || s[d] == '\t'); d++)
			*(*p + d) = s[d];
		*(*p + d) = '\0';
		x = 1;
	}
	for (i = j + 1; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (s[i - 1] == '\t' || s[i - 1] == ' '))
		{
			j = 0;
			while (!(s[i + j] == ' ' || s[i + j] == '\t' || s[i + j] == '\0'))
				j++;
			*(p + x) = (char *)malloc(sizeof(char) * (j + 1));
			if (*(p + x) == NULL)
				return (NULL);
			for (d = 0; d < j; d++)
				*(*(p + x) + d) = s[i + d];
			*(*(p + x) + d) = '\0';
			x++;
		}
	}
	return (p);
}
/**
 * strtow -  nsplit a string in to words
 * @s: character pointer
 * Return: character pointer to pointer
 */
char **strtow(char *s)
{
	unsigned int i, x = 0;
	char **p;

	if (s == NULL || *s == '\0')
		return (NULL);
	if (s[0] != ' ' && s[1] == '\0')
		x++;
	else
	{
		if (s[0] != ' ')
			x++;
		for (i = 1; s[i] != '\0'; i++)
		{
			if (s[i] != ' ' && (s[i - 1] == '\t' || s[i - 1] == ' '))
				x++;
		}
	}
	if (x == 0)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * ++x);
	if (p == NULL)
		return (NULL);
	if (s[0] != ' ' && s[1] == '\0')
	{
		*p = (char *)malloc(sizeof(char) + 1);
		if (*p == NULL)
			return (NULL);
		**p = s[0];
		*(*p + 1) = '\0';
		*(p + 1) = NULL;
		return (p);
	}
	else
		p = helpfun(p, s);
	return (p);
}
