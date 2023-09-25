#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - print the list in linked list
 * @head: - pointer to the header node
 * @n:- character pointer of string
 * Return: size of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *nav;

	last = (listint_t *) malloc(sizeof(listint_t));
	if (last == NULL || head == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	nav = *head;
	if (*head == NULL)
		*head = last;
	else
	{
		while (nav->next != NULL)
			nav = nav->next;
		nav->next = last;
	}
	return (last);
}
