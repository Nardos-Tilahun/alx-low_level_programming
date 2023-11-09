#include "lists.h"

/**
 * print_dlistint - print list
 * @h: dlist head
 *
 * Return: size of byte
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}
	while (h != NULL)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
