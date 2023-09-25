#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t countNode = 0;

	while (h != NULL)
	{
		h = h->next;
		countNode++;
	}
	return (countNode);
}
