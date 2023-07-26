#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint- sums all the data(ints) of a doubly linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *tmp = head;

	if (head)
	{
		while (tmp->next != NULL)
		{
			res += tmp->n;
			tmp = tmp->next;
		}
		res += tmp->n;
		return (res);
	}
	else
		return (NULL);
}
