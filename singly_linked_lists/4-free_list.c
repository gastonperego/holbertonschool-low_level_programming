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
	list_t *tmp;

	if (head)
	{
		while (head != NULL)
		{
			tmp = head->next;
			free(head->str);
			free(head);
			head = tmp;
		}
	}
}
