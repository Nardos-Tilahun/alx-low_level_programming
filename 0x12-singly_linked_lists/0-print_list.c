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
	{
		str = "(nil)";
		return (0);
	}
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
	const list_t *temp;

	if (h == NULL)
		exit(1);
	temp = h;
	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%u] %s\n", strlength(temp->str), temp->str);
		else
			printf("[%u] (nil)\n", strlength(temp->str));
		temp = temp->next;
		countNode++;
	}
	return (countNode);
}
