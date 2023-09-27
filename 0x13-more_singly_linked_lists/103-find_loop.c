#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - print the list in linked list
 * @h: - pointer to the header node
 * Return: size of nodes
 */
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *one_time = h, *two_time = h;

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
				one_time = one_time->next;
				two_time = two_time->next;
			}
			one_time = one_time->next;
			while (one_time != two_time)
			{
				one_time = one_time->next;
			}
			return (one_time);
		}
		one_time = one_time->next;
		two_time = two_time->next->next;
	}
	return (NULL);
}
