#include "lists.h"
#include <stdlib.h>
/**
 * free_list- frees a linked list
 *
 * @head: pointer to the frirst node of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head->next != NULL)
	{
		tmp = head;
		free(head);
		head = tmp;
	}
}
