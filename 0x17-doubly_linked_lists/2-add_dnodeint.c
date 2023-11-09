#include "lists.h"

/**
 * add_dnodeint - add double linked list
 * @h: dlist head
 * @n: the number added
 *
 * Return: new double linked list
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *add;

	if (h == NULL)
		return (NULL);
	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	if (*h == NULL)
	{
		add->next = NULL;
		add->n = n;
		add->prev = NULL;
		*h = add;
		return (*h);
	}
	add->n = n;
	add->prev = NULL;
	add->next = *h;
	(*h)->prev = add;
	*h = add;
	return (add);
}

