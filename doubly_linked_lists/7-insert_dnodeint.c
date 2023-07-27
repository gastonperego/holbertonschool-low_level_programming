#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index- inserts a new node at the given position of a
 * doubly linked list
 *
 * @h: pointer to the firat node of the list
 * @idx: position where the node has to be added
 * @n: data of the new node
 *
 * Return: pointer to the first node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (!*h)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		while (tmp && count != idx)
		{
			tmp = tmp->next;
			count++;
		}
		if (count < idx)
			return (NULL);
		if (tmp->next == NULL)
		{
			new->next = NULL;
			new->prev = tmp;
			tmp->next = new;
		}
		else
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev = new;
			(tmp->prev)->next = new;
		}
	}
	return (*h);
}
