#include "lists.h"

/**
 * free_dlistint - free the list
 * @h: dlist head
 *
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *tp, *tp1;

	tp = h;
	while (tp->next != NULL)
	{
		tp1 = tp;
		tp = tp->next;
		free(tp1);
	}
	free(tp);
}

