#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - print the list in linked list
 * @head: - pointer to the header node
 * @n:- integer
 * Return: size of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *) malloc(sizeof(listint_t));

	if (temp == NULL || head == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
