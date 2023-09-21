#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - print the list in linked list
 * @head: - pointer to the header node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
