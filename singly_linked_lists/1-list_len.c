#include "lists.h"
#include <stddef.h>
/**
 * list_len- returns the number of nodes of a linked list
 *
 * @h: pointer to linked list
 *
 * Return: number of nodes of the linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
