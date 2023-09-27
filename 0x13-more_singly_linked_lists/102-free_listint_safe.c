#include <stdio.h>
#include "lists.h"
/**
 * help - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
size_t help(const listint_t *h)
{
	size_t countNode = 1;
	const listint_t *one_time = h, *two_time = h;

	if (h == NULL || h->next == NULL)
		return (0);
	one_time = one_time->next;
	two_time = two_time->next->next;
	while (two_time != NULL && two_time->next != NULL)
	{
		if (one_time == two_time)
		{
			one_time = h;
			while (one_time != two_time)
			{
				countNode++;
				printf("[%p] %d\n", (void *)one_time, one_time->n);
				one_time = one_time->next;
				two_time = two_time->next;
			}
			printf("[%p] %d\n", (void *)one_time, one_time->n);
			one_time = one_time->next;
			while (one_time != two_time)
			{
				countNode++;
				printf("[%p] %d\n", (void *)one_time, one_time->n);
				one_time = one_time->next;
			}
			printf("-> [%p] %d\n", (void *)one_time, one_time->n);
			return (countNode);
		}
		one_time = one_time->next;
		two_time = two_time->next->next;
	}
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
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

	while (*h != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
