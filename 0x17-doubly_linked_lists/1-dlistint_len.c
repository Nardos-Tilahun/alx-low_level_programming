#include "lists.h"

/**
 * dlistint_len - print list
 * @h: dlist head
 *
 * Return: size of byte
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	if (h == NULL)
	{
		return (EXIT_FAILURE);
	}
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

