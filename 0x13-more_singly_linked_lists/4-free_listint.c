#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint - print the list in linked list
 * @head: - pointer to the header node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
