#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - print the list in linked list
 * @head: - pointer to the header node
 * @str:- character pointer of string
 * Return: size of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;

	temp = (list_t *) malloc(sizeof(list_t));
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
		temp->len = strlength(temp->str);
	}
	temp2 = *head;
	if (*head == NULL)
		*head = temp;
	else
	{
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp;
	}
	return (temp);
}
