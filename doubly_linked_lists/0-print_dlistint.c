#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint- prints all the elements of a dlistint
 *
 * @h:pointer to the firs node of the double linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
