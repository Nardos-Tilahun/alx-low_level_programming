#include "main.h"
/**
 *_strlen shows the length of a string
 *@s: input string
 *Return: integer
 */
int _strlen(char *s)
{
	int i = 0;
	
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
