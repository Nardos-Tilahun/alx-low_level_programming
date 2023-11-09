#include "lists.h"

/**
 * free_dlistint - free the list
 * @h: dlist head
 *
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *tp, *tp1;

	if (h == NULL)
		return;
	tp = h;
	while (tp->next != NULL)
	{
		tp1 = tp;
		tp = tp->next;
		free(tp1);
		tp1 = NULL;
	}
	free(tp);
	tp = NULL;
}

