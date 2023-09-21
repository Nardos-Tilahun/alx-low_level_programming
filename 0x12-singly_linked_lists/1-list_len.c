#include <stdio.h>
#include "lists.h"

/**
 * strlength - finding the length of the string
 * @str: - malloc string
 * Return: length of the strig
 */
unsigned int strlength(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);
	while (*str++)
		len++;
	return (len);
}

/**
 * list_len - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
size_t list_len(const list_t *h)
{
	size_t countNode = 0;

	while (h != NULL)
	{
		h = h->next;
		countNode++;
	}
	return (countNode);
}
