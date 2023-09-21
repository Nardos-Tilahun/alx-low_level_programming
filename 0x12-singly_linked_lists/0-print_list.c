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
 * print_list - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
size_t print_list(const list_t *h)
{
	size_t countNode = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", strlength(h->str), h->str);
		else
			printf("[%d] (nil)\n", strlength(h->str));
		h = h->next;
		countNode++;
	}
	return (countNode);
}
