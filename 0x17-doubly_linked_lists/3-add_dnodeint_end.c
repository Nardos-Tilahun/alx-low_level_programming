#include "lists.h"

/**
 * add_dnodeint_end - add double linked list at end
 * @h: dlist head
 * @n: the number added
 *
 * Return: new double linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *add;
	dlistint_t *temp;

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
	temp = *h;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = add;
	add->n = n;
	add->prev = temp;
	add->next = NULL;
	return (*h);
}

