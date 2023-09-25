#include <stdio.h>
#include "lists.h"
/**
 * helper - print the list in linked list
 * @h: - pointer to the header node
 * @i:- character pointer of string
 * Return: size of nodes
 */
int helper(listint_t **h, unsigned int i)
{
	listint_t *temp, *nav;
	unsigned int counter = 0;

	nav = *h;
	while (nav->next->next != NULL)
	{
		if (++counter && i == 0)
		{
			temp = *h;
			*h = nav->next;
			free(temp);
			return (1);
		}
		else if (counter == i)
		{
			temp = nav->next;
			nav->next = nav->next->next;
			free(temp);
			return (1);
		}
		if (nav->next->next->next == NULL)
		{
			if (counter++ == i)
			{
				temp = nav->next;
				nav->next = nav->next->next;
				free(temp);
				return (1);
			}
			else if (counter == i)
			{
				temp = nav->next->next;
				nav->next->next = NULL;
				free(temp);
				return (1);
			}
		}
		nav = nav->next;
	}
	return (-1);
}
/**
 * delete_nodeint_at_index - print the list in linked list
 * @head: - pointer to the header node
 * @index:- character pointer of string
 * Return: size of nodes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nav;

	if (head == NULL || *head == NULL)
		return (-1);
	else if (*head != NULL)
	{
		nav = *head;
		if (nav->next == NULL)
		{
			if (index == 0)
			{
				free(*head);
				*head = NULL;
				head = NULL;
				return (1);
			}
		}
		else if (nav->next->next == NULL)
		{
			if (index == 0)
			{
				temp = *head;
				*head = nav->next;
				free(temp);
				return (1);
			}
			else if (index == 1)
			{
				temp = nav->next;
				nav->next = nav->next->next;
				free(temp);
				return (1);
			}
		}
	}
	return (helper(head, index));
}
