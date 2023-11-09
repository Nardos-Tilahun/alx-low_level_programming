#include "lists.h"

/**
 * get_dnodeint_at_index - add double linked list at end
 * @head: dlist head
 * @i: the number added
 *
 * Return: new double linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int i)
{
	unsigned int c = 0;
	dlistint_t *h = head;
	dlistint_t *h1;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	if (i > c)
		return (NULL);
	h1 = head;
	while (i)
	{
		h1 = h1->next;
		i--;
	}
	return (h1);
}

