#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len- return the length of a doubly linked list
 *
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
