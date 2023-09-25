#include <stdio.h>
#include "lists.h"
/**
 *  get_nodeint_at_index - print the list in linked list
 * @head: - pointer to the header node
 * @index:- character pointer of string
 * Return: pointer size of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	int has_index = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		counter++;
		if ((counter - 1) == index)
		{
			has_index++;
			break;
		}
		head = head->next;
	}
	if (!has_index)
		return (NULL);
	return (head);
}
