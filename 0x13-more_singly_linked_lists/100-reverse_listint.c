#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint -  print the list in linked list
 * @head: - pointer to the header node
 * Return: size of nodes
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2 = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = temp2;
		temp2 = *head;
		*head = temp;
	}
	*head = temp2;
	return (*head);
}
