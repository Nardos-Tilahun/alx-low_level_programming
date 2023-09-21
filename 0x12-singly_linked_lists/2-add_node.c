#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - print the list in linked list
 * @head: - pointer to the header node
 * @str:- character pointer of string
 * Return: size of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t *) malloc(sizeof(list_t));

	if (temp == NULL || head == NULL)
		return (NULL);
	if (str != NULL)
	{
		temp->str = strdup(str);
		if (temp->str == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp->str = strdup(str);
	}
	temp->next = *head;
	*head = temp;
	return (*head);
}
