#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum of the linked list
 * @head: - pointer to the header node
 * Return: size of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
