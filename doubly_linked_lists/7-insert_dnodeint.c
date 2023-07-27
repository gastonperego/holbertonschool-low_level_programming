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

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp && count != (idx - 1))
	{
		tmp = tmp->next;
		count++;
	}

	if (count < idx)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	tmp->next->prev = new;

	return (*h);
}
