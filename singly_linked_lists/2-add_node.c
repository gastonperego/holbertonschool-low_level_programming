#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node- adds a node at the beggining of a linked list
 *
 * @head: double pointer to the head of the linked list
 * @str: string used as the data of the new node
 *
 * Return: pointer to the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = tmp;
	*head = new;

	return (*head);
}
