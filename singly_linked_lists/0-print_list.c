#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list- prints the strings of all the nodes of the linked list
 *
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes that the list has
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}

	return (count);
}
