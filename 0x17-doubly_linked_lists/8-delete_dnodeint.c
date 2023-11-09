#include "lists.h"

/**
 * delete_dnodeint_at_index - delete double linked list at index
 * @h: dlist head
 * @i: index the head is add on
 *
 * Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int i)
{
	dlistint_t *temp, *temp1;
	unsigned int c;

	if (h == NULL || *h == NULL)
		return (-1);
	temp = *h;
	for (c = 0; temp != NULL; c++)
		temp = temp->next;
	if (i > c)
		return (-1);
	temp = *h;
	if (temp->next == NULL && i == 0)
	{
		free(temp);
		*h = NULL;
		return (1);
	}
	if (i == 0)
	{
		*h = temp->next;
		(*h)->prev = NULL;
		free(temp);
		return (1);
	}
	temp = *h;
	while (i - 1)
	{
		i--;
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	if (temp->next != NULL)
		temp->next->prev = temp;
	free(temp1);
	return (1);
}
