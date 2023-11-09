#include "lists.h"

/**
 * insert_dnodeint_at_index - add double linked list at index
 * @h: dlist head
 * @n: the number added
 * @i: index the head is add on
 *
 * Return: new double linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int i, int n)
{
	dlistint_t *add;
	dlistint_t *temp, *temp1;
	unsigned int c = 0;

	if (h == NULL)
		return (NULL);
	temp = *h;
	while (temp != NULL)
	{
		c++;
		temp = temp->next;
	}
	if (i > c)
		return (NULL);
	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = n;
	if (*h == NULL && i == 0)
	{
		add->next = NULL;
		add->prev = NULL;
		*h = add;
		return (*h);
	}
	temp = *h;
	while (i != 1)
	{
		i--;
		temp = temp->next;
	}
	temp1 = temp->next;
	add->next = temp1;
	add->prev = temp;
	temp->next = add;
	temp1->prev = temp;
	return (temp->next);
}

