#include "lists.h"

/**
 * sum_dlistint - sum of double linked value
 * @h: dlist head
 *
 * Return: integer sum
 */
int sum_dlistint(dlistint_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}

