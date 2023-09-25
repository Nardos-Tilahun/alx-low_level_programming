#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t countNode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		countNode++;
	}
	return (countNode);
}
