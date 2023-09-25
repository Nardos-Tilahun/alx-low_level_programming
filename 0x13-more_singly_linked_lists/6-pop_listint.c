#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - print the list in linked list
 * @head: - pointer to the header node
 * Return: size of nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int int_first;

	if (head == NULL || *head == NULL)
		return (0);
	int_first = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (int_first);
}
