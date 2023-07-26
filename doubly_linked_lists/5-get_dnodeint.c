#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index- return one the asked node of a doubly linked list
 *
 * @head: pointer to the first onde of the list
 * @index: the "position" of the node in the list
 *
 * Return: ?
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (head)
	{
		while (count != index && head != NULL)
		{
			head = head->next;
			count++;
		}
	}
	else
		return (NULL);

	new = head;

	return (new);
}
