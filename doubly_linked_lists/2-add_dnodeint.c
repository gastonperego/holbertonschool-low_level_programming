#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint- adds a node at the beggining of a double linked list
 *
 * @head: pointer to the first node of the list
 * @n: element of the node
 *
 * Return: pointer to the first node of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = tmp;
	new->prev = NULL;

	if (tmp != NULL)
	{
		tmp->prev = new;
	}

	(*head) = new;

	return (*head);
}
