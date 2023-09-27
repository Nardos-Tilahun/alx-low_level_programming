#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - print the list in linked list
 * @head: - pointer to the header node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL && *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
