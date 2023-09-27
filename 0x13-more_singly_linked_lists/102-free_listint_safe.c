#include <stdio.h>
#include "lists.h"
/**
 * helper - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
size_t helper(listint_t **h)
{
	size_t countNode = 1;
	listint_t *one_time = *h, *two_time = *h, *temp = *h;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
		return (0);
	one_time = one_time->next;
	two_time = two_time->next->next;
	while (two_time != NULL && two_time->next != NULL)
	{
		if (one_time == two_time)
		{
			one_time = *h;
			while (one_time != two_time)
			{
				countNode++;
				one_time = one_time->next;
				two_time = two_time->next;
			}
			one_time = one_time->next;
			while (one_time != two_time)
			{
				countNode++;
				one_time = one_time->next;
			}
			one_time->next = NULL;
			return (countNode);
		}
		one_time = one_time->next;
		two_time = two_time->next->next;
	}
	while (temp != NULL)
	{
		temp = temp->next;
		countNode != 1 ? countNode++ : countNode;
	}
	return (countNode);
}
/**
 * free_listint_safe - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t countNode = 0;

	if (h == NULL || *h == NULL)
		return (0);
	countNode = helper(h);
	while (*h != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	return (countNode);
}
