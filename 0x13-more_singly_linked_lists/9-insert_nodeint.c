#include <stdio.h>
#include "lists.h"
/**
 * check - print the list in linked list
 * @n: - integer of index
 * @b: - list of between
 * @i: unsigned index
 * @c:- character pointer of string
 * Return: size of nodes
 */
listint_t *check(listint_t **n, listint_t **b, unsigned int i, unsigned int *c)
{
	listint_t *head = *n;

	if ((*n)->next == NULL)
	{
		if (i == 0)
		{
			(*c)++;
			(*b)->next = *n;
			head = *b;
		}
	}
	else if ((*n)->next->next == NULL)
	{
		if (i == 0)
		{
			(*c)++;
			(*b)->next = *n;
			head = *b;
		}
		else if (i == 1)
		{
			(*c)++;
			(*b)->next = (*n)->next;
			(*n)->next = *b;
		}
	}
	return (head);
}
/**
 * insert_nodeint_at_index - print the list in linked list
 * @head: - pointer to the header node
 * @idx: - integer of index
 * @n:- character pointer of string
 * Return: size of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *between, *nav;
	unsigned int counter = 0;
	int has_index = 0;

	between = (listint_t *) malloc(sizeof(listint_t));
	if (between == NULL || head == NULL)
		return (NULL);
	between->n = n;
	nav = *head;
	*head = check(&nav, &between, idx, &counter);
	if (counter)
		return (between);
	while (nav->next != NULL)
	{
		counter++;
		if (idx == 0)
		{
			between->next = nav;
			*head = between;
			has_index++;
			break;
		}
		else if (counter == idx)
		{
			between->next = nav->next;
			nav->next = between;
			has_index++;
			break;
		}
		nav = nav->next;
	}
	if (!has_index)
		return (NULL);
	return (between);
}
