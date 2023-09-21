#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
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
			printf("[%u] %s\n", temp->len, temp->str);
		else
			printf("[%u] (nil)\n", temp->len);
		temp = temp->next;
		countNode++;
	}
	return (countNode);
}

