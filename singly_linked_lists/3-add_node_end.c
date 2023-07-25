#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end- adds a new node at the end of a linked list
 *
 * @head: double pointer to the linked list
 * @str: string that will be the data of the new node
 *
 * Return: pointer to NULL (end of linked list)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (*head);
}
